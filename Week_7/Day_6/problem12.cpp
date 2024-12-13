#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
         ll n,m;  cin>>n>>m;
         ll ans=0;
        ll l=n-m;
         ll r=n+m;l=max(l,0LL);
       ll o=1e9;
        for(int i=0;i<33;++i)
        {
            if((n & (1LL<<i)) || (l/(1LL<<i))!=(r/(1LL<<i)))
            {
                ans+=(1LL<<i);
            }
        }
        cout<<ans<<'\n';
    }

      return 0;
}