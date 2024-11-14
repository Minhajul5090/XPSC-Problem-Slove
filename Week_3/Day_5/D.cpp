#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    int x=t;
    vector<string>v,v1;
    set<string>st;
    while(x--){
        string s;    cin>>s;
        v.push_back(s);
    }
    for(int i=t-1; i>=0; i--){
        if(st.insert(v[i]).second)v1.push_back(v[i]);
    }
    for(auto c:v1)cout<<c[c.size()-2]<<c[c.size()-1];

      return 0;
}