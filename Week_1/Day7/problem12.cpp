#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
       int n;  cin>>n;
       vector<ll>v(n),v1;
       map<ll,ll>mp;
       for(ll i=0;i<n; i++){
       cin>>v[i];
       mp[v[i]]++;
       } 
       ll ans=0;
       for(ll i=0; i<n; i++){
         ans=max(ans,mp[v[i]]);
       }
       cout<<ans;
      
      return 0;
}