#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n,m;  cin>>n>>m;
    map<string,int>mp;
    string a="",b="";
    for(int i=0; i<n; i++){
        string s;   cin>>s;
        string s1=s;
        reverse(s1.begin(),s1.end());
        if(mp.find(s1)!=mp.end())a+=s;
        else mp[s]++;
        if(s==s1)b=s;
    }
    cout<<a.size()*2+b.size()<<"\n";
    cout<<a<<b;
    reverse(a.begin(),a.end());
    cout<<a<<"\n";
      return 0;
}