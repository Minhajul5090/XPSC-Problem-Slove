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
        vector<int>v(n),a;
        for(auto &i:v)cin>>i;
        if(n==1){cout<<-1<<"\n"; continue;}
        int j=1;
        map<int,int>mp;
        for(int i=0; i<n; i++){
            if(v[i]==j){
              if(j!=n)  a.push_back(j+1);
              else a.push_back(j);
               mp[j+1]++;
            }
            else{
                a.push_back(j);
                mp[j]++; 
            }
           int k=1;
           while (mp.find(k)!=mp.end())k++;
           j=k;
           
        }
        if(v[n-1]==a[n-1])swap(a[n-1],a[n-2]);
        for(auto i:a)cout<<i<<" ";
         cout<<"\n";
    }

      return 0;
}