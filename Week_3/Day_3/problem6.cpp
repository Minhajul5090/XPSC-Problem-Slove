#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,k;   cin>>n>>k;
        string s;  cin>>s;
        int W=0;
        for(int i=0; i<k; i++){
            if(s[i]=='W')W++;
        }
        int ans=W;
        for(int i=k; i<n; i++){
            if(s[i]=='W')W++;
            if(s[i-k]=='W')W--;
            ans=min(ans,W);
        }
        cout<<ans<<endl;
    }

      return 0;
}