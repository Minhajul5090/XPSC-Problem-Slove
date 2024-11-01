#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n,m;         cin>>n>>m;
    unordered_map<string,string>mp;
    for(int i=1; i<=n; i++){
        string s,s1;
        cin>>s>>s1;
        s1+=";";
        mp[s1]=s;
    }

  for(int i=1; i<=m;i++){
    string a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<" "<<"#"<<mp[b]<<endl;
  }
      return 0;
}