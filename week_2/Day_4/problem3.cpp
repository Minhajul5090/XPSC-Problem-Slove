#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n;  cin>>n;
       map<ll,ll>mp;
       for(int i=1; i<=n; i++){
        int x;  cin>>x;
        mp[x]++;
       }
       priority_queue<int>p;
       for(auto i:mp)p.push(i.second);
       while(!p.empty()){
        if(p.size()<2)break;
        int x=p.top();
        p.pop();
        int y=p.top();
        p.pop();
        x--; y--;
        if(x>=1)p.push(x);
        if(y>=1)p.push(y);
       }
       int ans=0;
       while(!p.empty()){
        ans+=p.top();
        p.pop();
       }
       cout<<ans<<endl;
    }

      return 0;
}