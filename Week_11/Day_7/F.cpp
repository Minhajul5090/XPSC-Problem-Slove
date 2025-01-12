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
         vector<int>v(n);
         for(auto &i:v)cin>>i;
         sort(v.begin(),v.end());
         v.resize(unique(v.begin(),v.end())-v.begin());
        int i,j,ans=0;

         for(i=j=0;i<v.size();i++){
            while((v[i]-v[j])>=n)j++;
                  ans=max(ans,i+1-j);
     }
     cout<<ans<<endl;
    }

      return 0;
}