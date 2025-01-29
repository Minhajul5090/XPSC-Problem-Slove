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
        string s,s1;  cin>>s;
        for(int i=0; i<n;){
            if((s[i]=='a' || s[i]=='e') && i+2<n && (s[i+2]!='a' && s[i+2]!='e') ){
               s1.push_back(s[i]);
               s1.push_back(s[i+1]);
               s1.push_back('.');
               i+=2;           }
            else {
                s1.push_back(s[i]);
                if(i!=(n-1) && i+1!=(n-1)&&(s[i]=='a' || s[i]=='e')) s1.push_back('.');
                i++;
             }
        }
        for(int i=0; i<s1.size(); i++)cout<<s1[i];
        cout<<"\n";
    }

      return 0;
}