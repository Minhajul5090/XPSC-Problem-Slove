#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
//const int N=1e5+5;
int main()
{
    CODE
    int n,m,q;         cin>>n>>m>>q;
    vector<ll>v(n+2,0),p(n+2,0);
    for(int i=1; i<=n; i++)cin>>v[i];
    vector<tuple<ll,ll,ll>>tp(m+2,{0,0,0});
    for(int i=1; i<=m; i++){
        ll x,y,z;   cin>>x>>y>>z;
       tp[i]={x,y,z};
    }
    vector<ll>d(m+2,0);
    for(int i=1; i<=q; i++){
        ll a,b;   cin>>a>>b;
        d[a]++;
        d[b+1]--;
    }
   for(int i=1; i<=m; i++)d[i]+=d[i-1];
   for(int i=1; i<=m; i++){
     ll l=get<0>(tp[i]), r=get<1>(tp[i]), k=get<2>(tp[i])*d[i];
     p[l]+=k;
     p[r+1]-=k;
   }
   for(int i=1; i<=n; i++)p[i]+=p[i-1];
   for(int i=1; i<=n; i++)cout<<v[i]+p[i]<<" ";

      return 0;
}