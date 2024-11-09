#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n,i,j,s=0,x,cnt=0,ct2=0;
            cin>>n;
        vector<ll>v(n);
        map<ll,ll>mp;
    for(i=0;i<n;i++) {
      cin>>v[i];
      mp[v[i]]++;
  }
 
sort(v.begin(),v.end());

   cnt=n;
   for(i=0;i<n;i++){

    if(mp[v[i]]>0)
    {
        ll mn=INT_MAX,z;
        for(j=v[i];;j++)
        {
            if(mp[j]<1) break;
            mn=min(mp[j],mn);
            z=j;
        }
        s+=mn;
        for(j=v[i];j<=z;j++) mp[j]-=mn;
    }
}
      cout<<s<<endl;
    }

      return 0;
}