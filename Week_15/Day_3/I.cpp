#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        string s,s1;   cin>>s>>s1;
        if(s[0]==s1[0]){cout<<"YES\n"<<s[0]<<"*\n"; continue;}
        if(s[s.size()-1]==s1[s1.size()-1]){cout<<"YES\n"<<"*"<<s[s.size()-1]<<"\n"; continue;}
        string ans;
        bool k=0;
        for(int i=0; i<s.size()-1; i++){
            string a="";a+=s[i];a+=s[i+1];
            if(s1.find(a)!=string::npos){k=1; ans=a; break;}
        }
        if(k)cout<<"YES\n"<<"*"<<ans<<"*\n";
        else cout<<"NO\n";
    }

      return 0;
}