#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,m;   cin>>n>>m;
        map<int,set<int>>mp;
        for(int i=1;i<=m; i++){
            int u,v;   cin>>u>>v;
            mp[u].insert(v);
            mp[v].insert(u);
        }
        int leaf=-1,parent=-1,x,y;
        for(int i=1; i<=n; i++){
            if(mp[i].size()==1){
                leaf=i; break;
            }
        }
        for(int i=1; i<=n; i++){
            if(mp[i].find(leaf)!=mp[i].end()){
                y=mp[i].size()-1;
                parent=i; break;
            }
        }
        for(int i=1; i<=n; i++){
            if(mp[i].find(parent)!=mp[i].end() && mp[i].size()>1){
                x=mp[i].size(); break;
            }
        }
        cout<<x<<" "<<y<<"\n";
    }

      return 0;
}