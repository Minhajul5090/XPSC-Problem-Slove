#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n,d,k;     cin>>n>>d>>k;
        vector<ll>a(n+1),b(n+1);
        for(ll i=0;i<k;i++){
            ll l,r;
            cin>>l>>r;
            a[l]++;
            b[r]++;
   } 
  ll sum=0,mx=0,mn=0,bro=0,mom=0;
  for(ll i=1;i<=d;i++){
   sum+=a[i];
  }
 
  mx=sum;mn=sum;bro=1;mom=1;
  for(ll i=2;i+d-1<=n;i++){
   sum+=a[i+d-1];
   sum-=b[i-1];
   if(sum>mx){
      mx=sum;
      bro=i;
   }
   if(sum<mn){
      mn=sum;mom=i;
   }
  }
  cout<<bro<<" "<<mom<<endl;
    }

      return 0;
}