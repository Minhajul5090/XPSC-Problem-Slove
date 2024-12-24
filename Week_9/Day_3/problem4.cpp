#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

bool prime(ll n){
    for(ll i=2; i*i<=n; i++){
        if(n%i==0)return false;
    }
    return true;
}

int main()
{
    CODE
   ll n;   cin>>n;
   if(prime(n))cout<<1;
   else if(n%2==0)cout<<2;
   else{
    if(prime(n-2))cout<<2;
    else cout<<3;
   }
      return 0;
}