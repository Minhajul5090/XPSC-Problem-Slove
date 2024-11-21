#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,s;   cin>>n>>s;
        int a[n+5];
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(s==sum)cout<<0<<endl;
        else if(sum<s)cout<<-1<<endl;
        else{
             vector<ll>v,v1;
             v.push_back(0);v1.push_back(0);
          for(ll i=0; i<n; i++){if(a[i]==1)v.push_back(i+1);}
          for(ll i=n-1; i>=0; i--){if(a[i]==1)v1.push_back(n-i);}
          ll y=sum-s;
          ll ans=INT_MAX;
          for(int i=0; i<=y; i++){
            ll tmp=v[i];
            ll tmp1=v1[y-i];
            ans=min(ans,tmp+tmp1);
          }
          cout<<ans<<endl;
    }
    }

      return 0;
}