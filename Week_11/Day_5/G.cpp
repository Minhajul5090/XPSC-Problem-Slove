#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n;   cin>>n;
        vector<ll>v(n);
        map<tuple<ll,ll,ll>,ll>tp;
        for(ll i=0; i<n;i++)cin>>v[i];
        ll cn=0;
        for(ll i=0; i<n-2; i++){
            ll a=v[i],b=v[i+1],c=v[i+2];
            tp[{a,b,c}]++;
            tp[{a,b,-1}]++;
            tp[{a,-1,c}]++;
            tp[{-1,b,c}]++;
        }
        for(ll i=0; i<n-2; i++){
             ll a=v[i],b=v[i+1],c=v[i+2];
           cn=cn+ tp[{a,b,-1}]+  tp[{a,-1,c}]+tp[{-1,b,c}]-3* tp[{a,b,c}];
           tp[{a,b,c}]--;
            tp[{a,b,-1}]--;
            tp[{a,-1,c}]--;
            tp[{-1,b,c}]--;
        }
        cout<<cn<<"\n";
       
    }

      return 0;
}