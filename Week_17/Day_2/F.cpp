#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,k;    cin>>n>>k;
        vector<int>v(n),a;
        for(auto &i:v)cin>>i;
        int ans=INT_MAX,ev=0;
        for(int i=0; i<n; i++){
            if(v[i]%2==0)ev++;
            if(v[i]%k==0)ans=0;
            ans=min(ans,k-v[i]%k);
        }
       if(k==2){
        if(ev>0)cout<<0<<"\n";
        else cout<<min(ans,1)<<"\n";
       }
       else if(k==4){
        if(ev>=2)cout<<0<<"\n";
        else cout<<min(ans,2-ev)<<"\n";
       }
       else cout<<ans<<"\n";
    }

      return 0;
}