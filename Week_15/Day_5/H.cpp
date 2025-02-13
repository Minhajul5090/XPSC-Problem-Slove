#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    ll m,k;   cin>>m>>k;
    ll ans=0;
    ll l=1,r=m,mid;
    while (l<=r)
    {
        mid=(l+r)/2;
        ll c=m-(mid*2);
        ll n= m-mid;
        ll a=(c*(2*n-c+1))/2;
        ll x=(mid*(mid-1))/2;
        a+=x;
        if(a==k){ans=mid; break;}
        else if(a>k)l=mid+1;
        else r=mid-1;
        
    }
   cout<<ans;
      return 0;
}