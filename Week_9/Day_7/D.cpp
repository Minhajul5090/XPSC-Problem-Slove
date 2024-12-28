#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n; cin >> n;
    string s; cin >> s;
    map<char,int>mp;
    for(auto ch: s) mp[ch]++;
    if(mp['p'] && mp['s'])
    {
        if(mp['s']==1 && s[0]=='s') cout << "YES"<<endl;
        else if(mp['p']==1 && s[n-1]=='p') cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }
    else cout << "YES"<<endl;
    }

      return 0;
}