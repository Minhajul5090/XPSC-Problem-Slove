#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    ll n,k;   cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)cin>>v[i];
    map<ll, ll>mp;
    mp[0]=1;
    ll c=0;
    ll s=0;
    for(ll i=0; i<n; i++){
       s+=v[i];
       if(mp.find(s-k)!=mp.end())c+=mp[s-k];
       mp[s]++;
    }
    
    cout<<c<<endl;

      return 0;
}