#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,k;
        string s;   cin>>n>>k>>s;
        int i=0;
      vector<int>v;
      for(int i=0; i<n; i++){
        if(s[i]=='1')v.push_back(i);
      }
      if(v.size()==0){
        int c=0;
        for(int i=0; i<n; i+=(k+1))c++;
        cout<<c<<endl;
      }
      else{
        int ans=0;
        for(int i=0; i<v.size()-1; i++){
            for(int j=v[i]+k+1; j<=v[i+1]-(k+1); j+=(k+1))ans++;
        }
        for(int i=0; i<= v[0]-(k+1); i+=(k+1))ans++;
        for(int i=v[v.size()-1]+k+1; i<n; i+=(k+1))ans++;
        cout<<ans<<endl;
      }
    }

      return 0;
}