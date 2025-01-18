#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
          int n;cin>>n;
    vector<ll>v(n);
    for(auto &i:v)cin>>i;
    ll sum=0;
    ll gcd=v[0];
    for(int i=1;i<n;i++){
        gcd=__gcd(gcd,v[i]);
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(gcd==v[i])cnt++;
    }
     if(cnt>1)cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
    }

      return 0;
}