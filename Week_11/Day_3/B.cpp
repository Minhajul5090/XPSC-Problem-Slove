#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
      int n,k;   cin>>n>>k;
      vector<pair<int,int>>v;
      vector<int>p(n),ans(n);
      for(int i=0; i<n; i++){
        int x;   cin>>x;
        v.push_back({x,i});
      }
      for(int i=0; i<n; i++)cin>>p[i];
      sort(v.begin(),v.end());
      sort(p.begin(),p.end());
      for(int i=0; i<n; i++){
        ans[v[i].second]=p[i];
      }
       for(auto i:ans)cout<<i<<" ";
        cout<<"\n";
    }

      return 0;
}