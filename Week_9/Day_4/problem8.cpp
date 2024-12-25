#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

void value(ll n){
    bool f=true;
    ll x=sqrt(n);
    for(ll i=x; i>=1; i--){
        if(n%i==0){
            ll j=n/i;
            if(((i*j)/__gcd(i,j))==n){
                cout<<i<<" "<<j;
                f=false;
                break;
            }
        }
    }
    // if(f)cout<<1<<" "<<n;
}

int main()
{
    CODE
    ll x;   cin>>x;
    value(x);
      return 0;
}