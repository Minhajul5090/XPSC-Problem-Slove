#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const int N=2*1e5+5;
int main()
{
    CODE
    int t;         cin>>t;
    // vector<ll>v(N,0);
    map<ll,ll>mp;
    while(t--){
        ll a, b;   cin>>a>>b;
        mp[a]++;
        mp[b+1]--;
    }
    ll sum=0, mx=LLONG_MIN;
    for(auto i:mp){
        sum+=i.second;
        mx=max(sum,mx);
    }
     cout<<mx;
      return 0;
}