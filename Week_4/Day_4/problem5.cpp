#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    ll n,k;   cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    map<ll,ll>mp;
    ll l=0,r=0,z=0,ans=0;
    for(ll i=0; i<n; i++){
        mp[a[i]]++;
        while(mp.size()>k){
            mp[a[l]]--;
            if(mp[a[l]]==0)mp.erase(a[l]);
            l++;
        }
        ans+=(i-l+1);
   }
   cout<<ans;

      return 0;
}