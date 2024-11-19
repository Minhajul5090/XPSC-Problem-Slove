#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   ll n,k;    cin>>n>>k;
   ll a[n];
   for(ll i=0; i<n; i++)cin>>a[i];
   ll s=0,l=0,z=0,ans=0;
   for(ll i=0; i<n; i++){
    s+=a[i];
    //if(s>=k && z==0){ans++;z=1;}
    while(s-a[l]>=k){
        s-=a[l];
        l++;
    }
   if(s>=k)ans+=(l+1);
   }
   cout<<ans;

      return 0;
}