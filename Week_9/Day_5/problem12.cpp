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
        ll s=0,s1=0;
        vector<int>v(n);
        for(int i=0; i<n; i++){
              cin>>v[i];
            s+=v[i];
        }
       ll mx=0;
       for(int i=n-1; i>0; i--){
        s1+=v[i];
        s-=v[i];
        ll x=__gcd(s,s1);
        mx=max(mx,x);
       }
       cout<<mx<<endl;
    }

      return 0;
}