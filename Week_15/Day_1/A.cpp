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
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            int x;   cin>>x;
            mp[x%10]++;
        }
       
        bool ok=false;
      for(int i=0; i<=9; i++){
        for(int j=0; j<=9; j++){
            int k=(23-i-j)%10;
            if(i==j && i==k && mp[i]>=3){ok=true; break;}
            if(i==j && i!=k && mp[i]>=2 && mp[k]>0){ok=true; break;}
            if(j==k && j!=i && mp[j]>=2 && mp[i]>0){ok=true; break;}
            if(i==k && i!=j && mp[i]>=2 && mp[j]>0){ok=true; break;}
            if(i!=j && j!=k && i!=k && mp[i]>0 && mp[j]>0 && mp[k]>0){ok=true; break;}
        }
      }
        if(ok)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

      return 0;
}