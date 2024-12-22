#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;   cin>>n;
        string s;  cin>>s;
        map<char, int>mp;
        int ans=0;
        for(int i=0; i<s.size(); i++)mp[s[i]]++;
        for(auto i:mp){
            if(i.first=='?')continue;
            ans+=min(n,i.second);
        }
        cout<<ans<<endl;
    }

      return 0;
}