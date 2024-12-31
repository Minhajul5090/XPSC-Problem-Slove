#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   ll n;  cin>>n;
   vector<ll>v(n);
   map<ll,ll>mp;
   ll s=0,c=0;
   mp[0]=1;
   for(ll i=0; i<n; i++){
         cin>>v[i];
         s+=v[i];
         ll r=(s%n+n)%n;
         if( mp.find(r)!=mp.end())c+=mp[r];
         mp[r]++;
   }
   cout<<c<<endl;
      return 0;
}