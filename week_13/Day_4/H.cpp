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
       for(int i=0; i<n; i++){
         cin>>v[i];
         mp[v[i]]++;
       }
        if(n==1){cout<<0<<"\n"; continue;}
        int ans=INT_MIN;
       for(int x=1; x<=100; x++){
        int a=0;
        map<int,int>m;
        m=mp;
        for(int i=0; i<n; i++){
            int target=x-v[i];
            if(m[v[i]]>0 && m[target]>0){
                if(v[i]==target && m[v[i]]<2)continue;
                a++;
                m[v[i]]--;
                m[target]--;
                if(m[v[i]]<=0)m.erase(v[i]);
                if(m[target]<=0)m.erase(target);
            }
        }
        ans=max(ans,a);
        }
        cout<<ans<<"\n";
    }

      return 0;
}