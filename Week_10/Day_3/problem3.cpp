#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int b_src(vector<int>&v,int n,int x){
    if (n>v[v.size()-1])return x+1;
    int l=0, r=v.size()-1,ans;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]>=n){ans=mid+1; r=mid-1;}
        else l=mid+1;
    }
    return ans;
}
int main()
{
    CODE
    int n,t;         cin>>n>>t;
   vector<int>v(n);
   for(int i=0; i<n; i++)cin>>v[i];
   map<int,int>mp;
    while(t--){
        int x;  cin>>x;
       if(mp.find(x)!=mp.end())cout<<mp[x]<<endl;
       else{
        mp[x]=b_src(v,x,n);
        cout<<mp[x]<<endl;
       }
    }

      return 0;
}