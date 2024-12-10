#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;  cin>>n;
        string s,s1;   cin>>s>>s1;
        if(s[0]=='1' || s==s1){cout<<"YES"<<endl; continue;}
        int k=-1;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){k=i; break;}
        }
       if(k==-1){cout<<"NO"<<endl; continue;}
       bool f=true;
         for(int i=0; i<k; i++){
            if(s[i]!=s1[i]){
                f=false; break;
            }
         }
         if(f)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }


      return 0;
}