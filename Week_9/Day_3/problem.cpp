#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   
        ll n,a,b,p,q;   cin>>n>>a>>b>>p>>q;
        ll s=0;
        ll x=(a*b)/__gcd(a,b);
        ll mx=(n/x);
        s=p*((n/a)-mx);
       ll s1=q*((n/b)-mx);
        cout<<s+s1+mx*max(p,q);

      return 0;
}