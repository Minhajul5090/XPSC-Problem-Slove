#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n;    cin>>n;
        ll x=(n*(n-1))/2;
        map<ll,ll>mp;
        vector<ll>v(x),a;
       for(ll i=0; i<x; i++){
        cin>>v[i];
        mp[v[i]]++;
       }
       ll mx=*max_element(v.begin(),v.end());
       ll j=1;
       for(auto i: mp){
          while (i.second>0)
          {
            a.push_back(i.first);
            i.second-=(n-j);
            j++;
          }  
       }
       a.push_back(mx);
       for(auto i:a)cout<<i<<" ";
       cout<<endl;
    }

      return 0;
}