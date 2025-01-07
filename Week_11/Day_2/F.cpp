#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

ll abc(ll n, ll k){
    ll x=(n*k)+(n*(n-1))/2;
    return x;
}
int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n,k;   cin>>n>>k;
        ll total=abc(n,k);
        ll l=1, r=k+n-1,ans=LLONG_MAX,mid;

        while(l<=r){
            mid=(l+r)/2;
            ll s=abc(mid,k);
            ll s1=total-s;
            if(s<=s1){
                ans=min(ans,abs(s-s1));
                l=mid+1;
            }
            else {
                 ans=min(ans,abs(s-s1));
                 r=mid-1;
            }
        }
      
    
        cout<<ans<<endl;
    }

      return 0;
}