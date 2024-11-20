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
        string s;  cin>>s;
        vector<char>v;
       for(int i=n-1; i>=0; i--){
        if(s[i]=='0'){
            int tm= s[i-2]-'0';
            tm *=10;
            tm+=(s[i-1]-'0');
            v.push_back(tm+'a'-1);
            i-=2;
        }
        else{
            int tm=s[i]-'0';
            v.push_back(tm+'a'-1);
        }
       }
       reverse(v.begin(),v.end());
       for(auto i:v)cout<<i;
       cout<<endl;
    }
    

      return 0;
}