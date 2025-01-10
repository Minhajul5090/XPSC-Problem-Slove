#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n,k;
       cin>>n>>k;
       vector<ll>v(k);
       for(auto &i:v)cin>>i;
       sort(v.rbegin(),v.rend());

       ll sum=0;
       ll count=0,i=0;
       while(i<k  and sum+n-v[i]<n)
       {
           sum+=n-v[i++];
           count++;
       }
       cout<<count<<endl;
    }

      return 0;
}