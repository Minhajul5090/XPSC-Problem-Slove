#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   string s;
    cin>>s;
    ll ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='7'){
            ans+=pow(2,s.size()-i-1);
        }
    }
    for(int i=0;i<s.size();i++){
        ans+=pow(2,i);
    }
    cout<<ans<<endl;

      return 0;
}