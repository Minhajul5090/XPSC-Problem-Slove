#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   string s,t; cin>>s>>t;
    int c=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=t[i])c++;
    }
    cout<<c;
      return 0;
}