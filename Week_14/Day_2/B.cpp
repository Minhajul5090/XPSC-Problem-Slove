#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const ll N=1e10;
int main()
{
    CODE
    int t;         cin>>t;
   map<ll,ll>mp;
    while(t--){
        ll l,r;    cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    bool f= true;
    ll sum=0;
    for(auto i:mp){
      sum+=i.second;
       if(sum>2){
        cout<<"NO";
        f=false; break;
    }
   }
   if(f)cout<<"YES";
    
      return 0;
}