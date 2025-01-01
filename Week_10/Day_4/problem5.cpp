#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int r_src(vector<int>&v, int x){
    int l=0,r=v.size()-1,ans;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]<=x){ ans=mid; l=mid+1;}
        else r=mid-1;
    }
    return ans;
}
int l_src(vector<int>&v, int x){
     int l=0,r=v.size()-1,ans;
     while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]>=x){ans=mid; r=mid-1;}
        else l=mid+1;
     }
     return ans;
}
int main()
{
    CODE
   int n;   cin>>n;
   vector<int>v(n);
   for(int i=0; i<n; i++)cin>>v[i];
   sort(v.begin(),v.end());
   int x;   cin>>x;
   while(x--){
    int l,r;  cin>>l>>r;
    if(r<v[0] || v[n-1]<l){cout<<0<<endl; continue;}
    int m=r_src(v,r),z=l_src(v,l); 
    cout<<m-z+1<<endl;
 

   }
      return 0;
}