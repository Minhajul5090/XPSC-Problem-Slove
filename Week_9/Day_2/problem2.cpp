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
        vector<ll>v(n);
        for(ll i=0;i<n; i++)cin>>v[i];
        ll g1=0,g2=0;
        for(ll i=0; i<n;i+=2){
            g1=__gcd(g1,v[i]);
          
        }
        for(ll i=1; i<n; i+=2)  g2=__gcd(g2,v[i]);
        bool f=false;
        for(ll i=1; i<n; i+=2)
        {
            if(v[i]%g1==0){f=true; break;}
        }
        if(!f){cout<<g1<<endl; continue;}
        f=false;
         for(ll i=0; i<n; i+=2)
        {
            if(v[i]%g2==0){f=true; break;}
        }
          if(!f){cout<<g2<<endl;}
          else cout<<0<<endl;
    }

      return 0;
}