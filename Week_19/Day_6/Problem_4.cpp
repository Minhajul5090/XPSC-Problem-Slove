#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const  int N=(1 << 17)+9, inf=1e9+9;
ll a[N],at[4*N];

int merge(int l, int r, int len){
   
    int p=0;
    p=__lg(len);
    if(p %2) return l | r;
    else return l^r;
}
void build(int n,int b,int e){
    if(b==e){
        at[n]=a[b];
        return;
    }
    int mid=(b+e)/2,l=(n*2),r=(2*n)+1;
    build(l,b,mid);
    build(r,mid+1,e);
    at[n]=merge(at[l],at[r],e-b+1);
}
void update(int n,int b,int e,int i,int v){
    if(i<b || i>e)return;

    if(b==e){at[n]=v; return;}
    int mid=(b+e)/2,l=(n*2),r=(2*n)+1;
    update(l,b,mid,i,v);
    update(r,mid+1,e,i,v);
    at[n]=merge(at[l],at[r],e-b+1);
}
ll query(int n,int b,int e,int i,int j){
    if(e<i ||j<b) return inf;
    if(b>=i && e<=j)return at[n];
    int mid=(b+e)/2,l=(n*2),r=(2*n)+1;

    return min(query(l,b,mid,i,j),query(r,mid+1,e,i,j));
}
int main()
{
    CODE
        int n,m;    cin>>n>>m;
        n=1<<n;
        for(int i=1; i<=n; i++)cin>>a[i];

        build(1,1,n);
        while(m--){
            int i,x;   cin>>i>>x;
            update(1,1,n,i,x);
            cout<<at[1]<<"\n";
           
        }
    

      return 0;
}