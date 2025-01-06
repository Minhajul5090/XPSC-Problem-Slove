#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n,k;   cin>>n>>k;
        ll l=1, r=2e9,mid,ans;
        while(l<=r){
            mid=(l+r)/2;
            if((mid-(mid/n))>=k){ans=mid;r=mid-1;}
            else l=mid+1;
        }
        cout<<ans<<endl;
    }

      return 0;
}