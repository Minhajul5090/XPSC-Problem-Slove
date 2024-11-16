#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;  cin>>n;
        int x=n-1;
        vector<int>v,v1,v2;
        map<int, int>m,p;
        int s1=0;
        for(int i=1; i<=n; i++)s1+=i;
        int s=0;
            for(int i=0; i<n-1; i++){
                int x; cin>>x;
               v.push_back(x);
               s+=x;
        }
        int val=s1-s;
       int ar[x][x];
       for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            cin>>ar[i][j];
        }
       }
    
       int id=0, jd=0;
       for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            if(j==0 && ar[i][j]==val)jd++;
           else  if(j==(x-1) && ar[i][j]==val)id++;
           if(ar[i][j]==val && j>0){
                 m[ar[i][j-1]]++;
            }
           if(ar[i][j]==val && j<x-1){
                 p[ar[i][j+1]]++;
            } 
        }
       }
       //for(auto i:p)cout<<i.second<<" ";
      if(jd==(n-1))v.insert(v.begin()+0,val);
      else if(id==(n-1))v.push_back(val);
      else{
        int mx,px;
         for(auto i:m){
            if(i.second==(n-2))mx=i.first;
         }
         for(auto i:p)
         {
            if(i.second==(n-2))px=i.first;
         }
         
         for(int i=0; i<x-1;i++){
             if(v[i]==mx && v[i+1]==px)v.insert(v.begin()+i+1,val);
         }
      }
      for(auto i : v)cout<<i<<" ";
      cout<<endl;
        }

      return 0;
}