#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

ll cnt(vector<int>&v,ll t, int s){
    ll c=0;
    for(ll i=0; i<v.size(); i++){
        c+=(t/v[i]);
        if(c>=s)return c;
    }
    return c;
}
int main()
{
    CODE
    int n,t;   cin>>n>>t;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    ll l=1,r=1e18,mid,ans;
    while(l<=r){
        mid=(l+r)/2;
        if(cnt(v,mid,t)>=t){r=mid-1; ans=mid;}
        else l=mid+1;
    }
    cout<<ans;
      return 0;
}