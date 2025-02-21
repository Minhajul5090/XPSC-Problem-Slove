#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
vector<vector<int>>adj;
vector<bool>color;
int ans=0;
vector<int>sum,sum1;
int dfs1(int node)
{
    if(adj[node].size()==0)
    {
        if(color[node])return 1;
        else
            return 0;
    }
    int total=0;
    for(auto child:adj[node])
    {
        total+=dfs1(child);
    }
    if(color[node])total++;
    sum[node]=total;
    return total;
}
int dfs2(int node)
{
    if(adj[node].size()==0)
    {
       return 1;
    }
    int total=0;
    for(auto child:adj[node])
    {
        total+=dfs2(child);
    }
    total++;
    if(sum[node]==total-sum[node])ans++;
    return total;
}
int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;  cin>>n;
        adj.assign(n+1,vector<int>());
        sum.assign(n+1,0);
        sum1.assign(n+1,0);
       
        for(int i=2;i<=n;i++)
        {
            int val;  cin>>val;
            adj[val].push_back(i);
        }
       color.assign(n+1,false);
       string s;
       cin>>s;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='B')color[i+1]=true;
       }
       int total_node=0;
       dfs1(1);
       dfs2(1);
       cout<<ans<<endl;
       ans=0;
    }

      return 0;
}