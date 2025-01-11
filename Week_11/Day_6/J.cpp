#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll h,n;   cin>>h>>n;
        vector<ll>v(n),c(n);
        for(ll i=0; i<n; i++)cin>>v[i];
        for(ll i=0; i<n; i++)cin>>c[i];

        auto ok=[&](ll mid){
            ll sum=0;
           for(ll i=0; i<n; i++){
            ll x=1+(mid-1)/c[i];
            ll y=v[i]*x;
            sum+=y;
            if(sum>=h)return true;
           }
           return false;
        };

        ll low=1,high=1e12,ans,mid;
        while(low<=high){
            mid=(low+high)/2;

            if(ok(mid)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        cout<<ans<<"\n";
    }

      return 0;
}