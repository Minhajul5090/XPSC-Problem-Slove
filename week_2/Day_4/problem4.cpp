#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n,q;  cin>>n>>q;
       map<int,vector<int>>mp;
        for(ll i=1; i<=n; i++){
            int x; cin>>x;
            mp[x].push_back(i);
        }
        //cout<<mp[3].back();
        while(q--){
           int a,b;   cin>>a>>b;
           if(mp.find(a)!=mp.end() && mp.find(b)!=mp.end()){
           int ai=mp[a].front();
           int bi=mp[b].back();
           if(ai<bi)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
           }
           else cout<<"NO"<<endl;
            
        }
    }

      return 0;
}