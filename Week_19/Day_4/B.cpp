#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const  int N=1e5+9, inf=1e9+9;
ll a[N],at[4*N];

void build(int n,int b,int e){
    if(b==e){
        at[n]=a[b];
        return;
    }
    int mid=(b+e)/2,l=(n*2),r=(2*n)+1;
    build(l,b,mid);
    build(r,mid+1,e);
    at[n]=min(at[l],at[r]);
}
void update(int n,int b,int e,int i,int v){
    if(i<b || i>e)return;

    if(b==e){at[n]=v; return;}
    int mid=(b+e)/2,l=(n*2),r=(2*n)+1;
    update(l,b,mid,i,v);
    update(r,mid+1,e,i,v);
    at[n]=min(at[l],at[r]);
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
        for(int i=1; i<=n; i++)cin>>a[i];

        build(1,1,n);
        while(m--){
            int x;   cin>>x;
            if(x==1){
                int in,val;   cin>>in>>val;
                in++;
                update(1,1,n,in,val);
            }
            else{
                int l,r;   cin>>l>>r;
                l++;
                ll ans=query(1,1,n,l,r);
                cout<<ans<<"\n";
            }
        }
    

      return 0;
}