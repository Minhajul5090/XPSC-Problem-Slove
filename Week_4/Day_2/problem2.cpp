#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   ll n,k; cin>>n>>k;
   ll a[n];
   for(ll i=0; i<n; i++)cin>>a[i];
   ll s=0,l=0;
   ll ans=LLONG_MAX,f=0;
   for(ll i=0;i<n; i++){
     s+=a[i];
     while(s-a[l]>=k){
        s-=a[l];
        l++;   
     }
     if(s>=k)ans=min(ans,i-l+1);
       
   }
   if(ans==LLONG_MAX)cout<<-1;
   else  cout<<ans;

      return 0;
}
