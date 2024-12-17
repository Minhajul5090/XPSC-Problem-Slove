#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

ll count_ans(vector<int>v){
      ll c=0,s=0;
        for(int i=v.size()-1; i>=0; i--){
         if(v[i]==0)c++;
         else s+=c;
        }
        return s;
}

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
      ll ans= count_ans(v);
      for(int i=0; i<n; i++){
        if(v[i]==0){
            v[i]=1;
            ans=max(ans,count_ans(v));
            v[i]=0; break;
        }
      }
      for(int i=n-1; i>=0; i--){
        if(v[i]==1){
            v[i]=0;
            ans=max(ans,count_ans(v));
            break;
        }
      }
      cout<<ans<<endl;
    }

      return 0;
}