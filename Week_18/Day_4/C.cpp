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
        int ans=0;
        for(int i=0; i<n; i++){
            if(i<n-1 && s[i]=='*' && s[i+1]=='*')break;
            if(s[i]=='@')ans++;
        }
        cout<<ans<<"\n";
    }

      return 0;
}