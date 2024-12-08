#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
      ll n;  cin>>n;
      vector<ll>v;
      for(int k=0; k<=__lg(n); k++){
        if((n>>k)&1){
            ll val =n-(1ll<<k);
            if(val>0)v.push_back(val);
        }
      } 
      v.push_back(n);
      sort(v.begin(), v.end());
      cout<<v.size()<<endl;
      for( auto i:v)cout<<i<<" ";
      cout<<endl; 
    }

      return 0;
}