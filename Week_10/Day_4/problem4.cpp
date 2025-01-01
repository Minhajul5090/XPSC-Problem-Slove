#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int b_src(vector<ll>&v, ll x){
     ll l=0, r=v.size()-1;
     ll ans;
     while(l<=r){
       ll mid=(r+l)/2;
       if(v[mid]>=x){
        ans=mid+1;
       r=mid-1;
       }
       else l=mid+1;
     }
     return ans;
}
int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,k;  cin>>n>>k;
        vector<ll>v(n),p(n);
        for(int i=0; i<n; i++)cin>>v[i];
        sort(v.rbegin(),v.rend());
        p[0]=v[0];
        for(int i=1; i<n; i++)p[i]=v[i]+p[i-1];
        while(k--){
            ll x;  cin>>x;
            if(x>p[n-1]){cout<<-1<<endl; continue;}
            cout<<b_src(p,x)<<endl;
        }
    }

      return 0;
}