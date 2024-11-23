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
        vector<ll>v(n);
        for(ll i=0; i<n; i++)cin>>v[i];
        string s;    cin>>s;
        vector<ll>v1(n);
        v1[0]=v[0];
        for(ll i=1; i<n; i++)v1[i]=v[i]+v1[i-1];
        ll l=0,r=n-1,ans=0;
        //for(int i:v1)cout<<i<<" ";
        while(l<r){
            if(s[l]=='L'){
                while(s[r]!='R' && l<r)r--;
                if(l==0 && s[l]=='L'&& s[r]=='R')ans+=v1[r];
                else if(l>0 && s[l]=='L'&& s[r]=='R') ans+=(v1[r]-v1[l-1]);
              
                r--;
            }
           l++;  
        }
        cout<<ans<<endl; 
    }

      return 0;
}