#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   ll n,k;   cin>>n>>k;
   vector<ll> a(n);
   for(ll i=0; i<n; i++)cin>>a[i];
   multiset<ll>s;
   ll l=0,ans=0;
   for(ll r=0; r<n; r++){
    s.insert(a[r]);
    while(*s.rbegin()-*s.begin()>k){
        s.erase(s.find(a[l]));
        l++;
    }
    if(*s.rbegin()-*s.begin()<=k)ans+=(r-l+1);
   }
   cout<<ans;

      return 0;
}