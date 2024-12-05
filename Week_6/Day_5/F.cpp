#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll cnt[n];
    vector<ll>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
       ll s=0,mx=0,c=0;
       for(int i=0; i<n; i++){
        mx= max(mx,v[i]);
        s+=v[i];
        if(s-mx==mx)c++;
       }
       cout<<c<<endl;
    }
      return 0;
}