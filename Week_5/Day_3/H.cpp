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
      int  x=n*n;
        vector<int>v,v1;
        for(int i=1; i<=x; i++)v.push_back(i);
        int l=0,r=x-1;
        while(l<=r){
            if(l==r)v1.push_back(v[l]);
            else{
                v1.push_back(v[r]);
                v1.push_back(v[l]);
            }
            l++;r--;
        }
//         16 1 15 2 
// 4 13 3 14 
// 12 5 11 6 
// 8 9 7 10 
        int c=0,z=0;
        vector<int>ans,ans1;
        for(int i=0; i<x; i++){
         if(c<n) {cout<<v1[i]<<" ";c++;}
         if(c>=n){
            if(c==n){cout<<endl;c++;}
            else {ans.push_back(v1[i]);z++;}
            if(z==n){
                reverse(ans.begin(),ans.end());
                for(int j:ans)cout<<j<<" ";
                cout<<endl;
                c=0; z=0;
                ans.clear();
            }
         }
          
       }
       
    }

      return 0;
}

