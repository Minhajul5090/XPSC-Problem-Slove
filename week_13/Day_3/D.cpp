#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,m,k;   cin>>n>>m>>k;
        vector<int>v(n),v1(m);
        for(auto &i:v)cin>>i;
        for(auto &i:v1)cin>>i;
        int ans=0;

        for(auto i:v){
            for(auto j:v1){
             if(i+j<=k)ans++;
            }
        }
        cout<<ans<<"\n";
    }

      return 0;
}