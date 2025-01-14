#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n,m;   cin>>n>>m;
        vector<ll>v(n);
        for(auto &i:v)cin>>i;
        sort(v.begin(),v.end());
        ll s=1+v[0]*2;
         
        for(ll i=1; i<n; i++){
            s+=((1+v[i]*2)-v[i-1]);
            if(i==n-1)s-=v[0];
            
        }
        if(s>m)cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
        
       
    }

      return 0;
}