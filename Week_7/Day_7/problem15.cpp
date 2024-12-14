#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
         ll n; cin>>n;
       vector<ll> v;
 
       ll mx,mi;
 
       for(int i=1;i<=n;i++)
       {
           ll c;
 
           cin>>c;
 
           v.push_back(c);
       }
 
       mx=v[0];
 
       mi=v[0];
 
       for(int i=1;i<n;i++)
       {
          mx=mx|v[i];
 
          mi=mi&v[i];
       }
 
       ll result=mx-mi;
 
       cout<<result<<endl;
    }

      return 0;
}