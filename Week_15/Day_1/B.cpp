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
        unordered_map<int,ll>mp;
        for(int i=1; i<=n; i++){
           int x;   cin>>x;
            mp[x-i]++;
        }
        ll ans=0;
        for(auto i: mp){
          ll x= i.second;
          x--;
          ans+=(x*(x+1))/2;
            
        }
        cout<<ans<<"\n";
    }

      return 0;
}