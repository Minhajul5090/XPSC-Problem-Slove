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
        vector<int>v(n),v1(n);
        for(int i=0; i<n; i++)cin>>v[i];
         for(int i=0; i<n; i++)cin>>v1[i];
         int m=INT_MIN;
         bool f=false;
         for(int i=0; i<n; i++){
            if(v1[i]>v[i]){f=true; break;}
            m=max(m, v[i]-v1[i]);
         }
         if(f){cout<<"NO"<<endl;continue;}
         for(int i=0; i<n; i++){
            int a= v[i]-v1[i];
            if(a<m && v1[i]!=0){f=true; break;}
         }
         if(f)cout<<"NO"<<endl;
         else cout<<"YES"<<endl;
    }

      return 0;
}