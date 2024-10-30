#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;  cin>>n;
    ll a[n];
    ll sum=0,mx=INT_MAX;
  for(ll i=0; i<n; i++){
    cin>>a[i];
    sum+=a[i];
    if(a[i]%2!=0 && a[i]<mx)mx=a[i];
  }
  if(sum%2==0)cout<<sum;
  else cout<<sum-mx;
      return 0;
}