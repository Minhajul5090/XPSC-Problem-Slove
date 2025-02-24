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
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp[v[0]]<k || mp[v[n-1]]<k){cout<<"NO\n"; continue;}
        if((mp.size()==1 && mp[v[0]]>=k)||(v[0]==v[n-1] &&mp[v[0]]>=k)){cout<<"YES\n"; continue;}
        int c=0,j;
        bool ok=0;
       for(int i=0; i<n; i++){
        if(v[i]==v[0])c++;
        if(c>=k){j=i+1; break;}
       }
       c=0;
       for(int i=j; i<n; i++){
        if(v[i]==v[n-1])c++;
       }
        if(c<k)cout<<"NO\n";
        else cout<<"YES\n";
    }

      return 0;
}