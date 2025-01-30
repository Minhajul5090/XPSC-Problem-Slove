#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n,q;  cin>>n>>q;
        vector<ll>v(n+1);
        for(int i=1; i<=n; i++)cin>>v[i];
        vector<ll>d(n+1,0),p(n+1);
        while(q--){
            int l,r;   cin>>l>>r;
            d[l]+=1;
            if(r<n)d[r+1]-=1;
        } 
        p[1]=d[1];
        for(int i=2; i<=n; i++)p[i]=d[i]+p[i-1]; 
        sort(p.rbegin(),p.rend());
        sort(v.rbegin(),v.rend());
        ll ans=0; 
        for(int i=0; i<n; i++){
            ans+=p[i]*v[i];
        }
        cout<<ans;
      return 0;
}