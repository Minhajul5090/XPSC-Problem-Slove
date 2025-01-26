#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n;   cin>>n;
        vector<ll>v(n);
        ll s=0;
        map<ll,int>mp;
        for(int i=0; i<n;i++){
            cin>>v[i];
            s+=v[i];
            mp[v[i]]++;
        }
        if(n==1){cout<<"YES"<<"\n"; continue;}
        priority_queue<ll>pq;
        pq.push(s);
        bool ok=true;

        while(!pq.empty()){
            ll val=pq.top();
            pq.pop();
            ll x=val/2;
            ll y=val-x;

            if(mp[x]>0)mp[x]--;
            else if(mp[x]==0 && x>1)pq.push(x);

            if(mp[y]>0)mp[y]--;
            else if(mp[y]==0 && y>1)pq.push(y);

            if(pq.size()>n){ ok=false; break;}

        }
        for(auto i:v){
          if(mp[i]>0){ok=false; break;}
          }
          if(ok)cout<<"YES"<<"\n";
          else cout<<"NO"<<"\n";
    }

      return 0;
}