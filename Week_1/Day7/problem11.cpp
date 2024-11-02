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
        string s; cin>>s;
        map<char,char>mp;
        set<char>st;
        for(int i=0; i<n; i++)st.insert(s[i]);
        vector<char>v(st.begin(),st.end()),v1;
        v1=v;
        reverse(v.begin(),v.end());
        for(int i=0; i<v.size(); i++){
            mp[v1[i]]=v[i];
            mp[v[i]]=v1[i];
        }
        for(auto i:s)cout<<mp[i];
        cout<<endl;
    }

      return 0;
}