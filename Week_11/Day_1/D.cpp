#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n,k;   cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n; i++)cin>>v[i];
    sort(v.begin(),v.end());
    
    auto val=[&](ll a){
       ll c=0;
       for(int i=n/2; i<n; i++){
        if(v[i]<a)c+=(a-v[i]);
       }
       return c;
    };
    ll l=1, r=2e9,mid,ans;
    while(l<=r){
        mid=(l+r)/2;
        if(val(mid)<=k){ans=mid;l=mid+1;}
        else r=mid-1;
    }
    cout<<ans;
      return 0;
}