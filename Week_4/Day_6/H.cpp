#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n,k;    cin>>n>>k;
        vector<ll>v(n);
        for(ll i=0; i<n; i++)cin>>v[i];
        for(ll i=0; i<n; i++)v[i]+=(i+1);
        sort(v.begin(),v.end());
        ll ans=0,s=0;
        for(auto i:v){
           s+=i;
           if(s<=k)ans++;
        }
        cout<<ans<<endl;
    }

      return 0;
}