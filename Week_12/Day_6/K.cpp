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
        set<ll>s;
        for(int i=0; i<n; i++){cin>>v[i]; s.insert(v[i]);}
        if(n==1){cout<<1<<"\n";continue;}
        ll mx=*max_element(v.begin(),v.end());
        ll gd=mx-v[0];
     
        for(int i=1; i<n; i++){

         gd=__gcd(gd,(mx-v[i]));
        }
        ll op=0;
        for(int i=0; i<n; i++){
         int x=(mx-v[i] )/ gd;
         op+=x;
        
        }
          int a=mx;
       while(s.find(mx-gd)!=s.end()){mx-=gd;}
         mx-=gd;
        int y=(a-mx)/gd;
         cout<<op+y<<endl;
    }

      return 0;
}