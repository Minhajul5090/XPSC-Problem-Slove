#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n,k;    cin>>n>>k;
        vector<ll>a(n),h(n);
        for(ll i=0; i<n; i++)cin>>a[i];
        for(ll i=0; i<n; i++)cin>>h[i];
        ll l=0,s=0,ans=0,r=0;
        for( r=0; r<n; r++ ){
            if(r<n-1 && h[r]%h[r+1]==0){
                s+=a[r];
                while(s>k){
                    s-=a[l];
                    l++;
                }
                ans=max(ans,r-l+1);
            }
            else {
                s+=a[r];
                while(s>k){
                    s-=a[l];
                    l++;
                }
                ans=max(ans,r-l+1);
                s=0;l=r+1;
            }
        }
        // cout<<r<<endl;
        // s+=a[r];
        cout<<ans<<endl;
    }

      return 0;
}