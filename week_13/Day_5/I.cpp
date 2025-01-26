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
        map<int,int>mp;
        double s=0;
        for(int i=0; i<n;i++){
            cin>>v[i];
            s+=v[i];
            mp[v[i]]++;
        } 
        
        double k=2*(s/n);
       if(k!=static_cast<int>(k)){cout<<0<<"\n"; continue;}
        ll ans=0;
      for(int i=0; i<n; i++){
       int target=k-v[i];
       if(mp[target]>0 && mp[v[i]]>0){
         if(v[i]==target)
         {
            if(mp[target]>=2){ans+=(mp[target]-1); mp[target]--; }

            continue;
         }
         ans+=mp[target];
         mp[v[i]]--;
       }

       }
       cout<<ans<<"\n";
      }
       

      return 0;
}