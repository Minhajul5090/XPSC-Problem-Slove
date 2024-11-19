#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll a,b,n;   cin>>a>>b>>n;
        ll ar[n];
       for(ll i=0; i<n; i++)cin>>ar[i];
       ll ans=1;
       ans+=(min(b,a)-1);
       ll c;
       for(ll i=0; i<n; i++){
        ll x=ar[i]+1;
        c=min(x,a);
        ans+=(c-1);
       }
       cout<<ans<<endl;
    }

      return 0;
}