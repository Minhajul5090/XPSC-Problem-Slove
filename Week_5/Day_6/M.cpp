#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
         int n;   cin>>n;
         map<ll,ll>mp;
         ll mx=LLONG_MIN;
         for(ll i=1; i<=n; i++){
            ll x;   cin>>x;
            mp[x]++;
            mx=max(mx,mp[x]);
         }
         int y=n-mx;
         if(y==0){cout<<0<<endl;continue;}
         int ans=0;
         while (1)
         {
           if(y<=mx){ans+=y+1;break;}
           else{
             ans+=(mx+1);
             y-=mx;
             mx+=mx;
           }
         }
         cout<<ans<<endl;
    }

      return 0;
}