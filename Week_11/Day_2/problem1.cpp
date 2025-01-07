#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    string  s,s1;   cin>>s>>s1;
    int n=s.size(),m=s1.size();
    vector<int>v(n);
    for(int i=0; i<n; i++){cin>>v[i]; v[i]--;}

   auto ok=[&](int d){
     vector<bool>a(n);
     for(int i=0; i<=d; i++)a[v[i]]=true;
     int j=0;
     for(int i=0; i<n; i++){
        if(!a[i] && s[i]==s1[j])j++;
        if(j==m)return true;
     }
     return false;
   };

    int l=0,r=n-1,ans=0,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(ok(mid)){
            ans=mid+1;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans;
    
      return 0;
}