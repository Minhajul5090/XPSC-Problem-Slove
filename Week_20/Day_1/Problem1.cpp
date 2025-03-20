#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const int N=1e5+9;
ll a[N],at[N*4],lzy[N*4];

void push(int n,int b,int e){
   if(lzy[n]==0)return;

   at[n]+=(1LL*(e-b+1)*lzy[n]);
   if(b!=e){
      int x=(2*n), y=(2*n)+1;
      lzy[x]+=lzy[n];
      lzy[y]+=lzy[n];
   }
   lzy[n]=0;
}
void build(int n,int b,int e){
   if(b==e){
      at[n]=a[b];
      return;
   }
   int mid=(b+e)/2,x=(2*n), y=(2*n)+1;
   build(x,b,mid);
   build(y,mid+1,e);
   at[n]=at[x]+at[y];
}
void update(int n,int b,int e,int i,int j,int v){
   push(n,b,e);
   if(e<i || j<b) return;

   if(b>=i && e<=j){
      lzy[n]=v;
      push(n,b,e);
      return;
   }
   int mid=(b+e)/2,x=(2*n), y=(2*n)+1;
   update(x,b,mid,i,j,v);
   update(y,mid+1,e,i,j,v);
   at[n]=at[x]+at[y];
}
ll query(int n,int b,int e,int i,int j){
   push(n,b,e);
   if(e<i || j<b)return 0;
   if(b>=i && e<=j)return at[n];
   int mid=(b+e)/2,x=(2*n), y=(2*n)+1;
   return query(x,b,mid,i,j)+query(y,mid+1,e,i,j);
}
int main()
{
    CODE
        int n,m;    cin>>n>>m;
        build(1,1,n);
        while(m--){
         int q;    cin>>q;
         if(q==1){
            int x,y,v;   cin>>x>>y>>v;
            x++;
            update(1,1,n,x,y,v);
         }
         else{
            int x,y;    cin>>x;
            x++;
            cout<<query(1,1,n,x,x)<<"\n";
         }
        }
    

      return 0;
}