#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
   unordered_map<string,int>s;
   for(int i=1; i<=t; i++){
    string s1;   cin>>s1;
    
    if(s[s1]==0){
        cout<<"OK"<<endl;
        s[s1]=1;
    }
    else {
        string ans=s1+to_string(s[s1]);
        cout<<ans<<endl;
        s[s1]++;
    }
   }

      return 0;
}