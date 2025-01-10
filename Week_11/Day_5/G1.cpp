#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
         ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(auto &i:v)cin>>i;
 
        ll l=0;
        ll r=INT_MAX;
        ll ans=INT_MAX;
        while(l<=r){
            ll mid=(l+r)/2;
            ll total=0;
            for(ll i=0;i<n;i++){
                if(v[i]<mid){
                    total+=(mid-v[i]);
                }
            }
            if(total<=k){
                ans=mid;
                l=mid+1;
            }else r=mid-1;
        }
 
        cout<<ans<<endl;
    }

      return 0;
}