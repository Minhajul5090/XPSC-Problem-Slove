#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

bool ok(vector<ll>&v, ll n,ll c,ll d,ll k ){
    if(k==0) return v[0]*d>=c;
    ll sum=0, ans =0;
    if(k>=n){
        for(int i=0; i<n; i++)sum+=v[i];
    }
    else{
        for(int i=0; i<k; i++)sum+=v[i];
    }
    ll times=d/k;
    ans=times*sum;
    ll rem=d%k;
    if(rem>=n){
        for(int i=0; i<n; i++)ans+=v[i];
    }
    else for(int i=0; i<rem;i++)ans+=v[i];

    return ans>=c;
}
int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n,c,d;  cin>>n>>c>>d;
        vector<ll>v(n);
        for(auto &i :v)cin>>i;
        sort(v.rbegin(),v.rend());
        
        ll sum=0;
        for(int i=0; i<min(n,d); i++)sum+=v[i];
        if(sum>=c){cout<<"Infinity"<<"\n";continue;}

        ll l=0,r=1e12,ans=-1;
        while(l<=r){
            ll mid=(l+r)/2;
            if(ok(v,n,c,d,mid+1)){
                l=mid+1;
                ans=mid;
            }
            else r=mid-1;
        }
        if(ans==-1)cout<<"Impossible"<<"\n";
        else cout<<ans<<"\n";
    }

      return 0;
}