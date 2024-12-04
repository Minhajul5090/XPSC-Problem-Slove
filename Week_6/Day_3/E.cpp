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
        ll s=0;
        vector<int>v(n);
      for(int i=0; i<n; i++)cin>>v[i];
      int j=-1;
      for(int i=0; i<n-1; i++){
         if(v[i]!=0){j=i;break;}
      }
      if(j==-1){cout<<0<<endl; continue;}
      for(int i=j; i<n-1; i++){
        if(v[i]==0)s+=1;
        else s+=v[i];
      }
      cout<<s<<endl;
    }

      return 0;
}