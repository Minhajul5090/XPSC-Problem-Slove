#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int k,n,m; cin>>k>>n>>m;
        vector<int>a(n),b(m);

        for(auto &i :a)cin>>i;
        for(auto &i :b)cin>>i;
      //if(a[0]>k && b[0]>k){cout<<-1<<"\n";continue;}
       bool f= false;
       vector<int>ans;
       int i=0, j=0;
       while(true){
          if(a[i]==0 && i<n){ans.push_back(0); k++;i++; continue;}
          if(a[i]>0 && a[i]<=k && i<n){ans.push_back(a[i]); i++; continue;}

          if(b[j]==0 && j<m){ans.push_back(0); k++;j++; continue;}
          if(b[j]>0 && b[j]<=k && j<m){ans.push_back(b[j]); j++; continue;}

          if((b[j]>k&& j<m)|| (a[i]>k && i<n) ){f=true;break;}
          break;

       }
       if(f)cout<<-1<<"\n";
       else {
        for(auto i: ans)cout<<i<<" ";
          cout<<"\n";
       }
    }

      return 0;
}