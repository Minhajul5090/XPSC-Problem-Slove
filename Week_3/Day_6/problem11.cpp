#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n,k,q;  cin>>n>>k>>q;
        ll a[n];
        for(ll i=0; i<n; i++)cin>>a[i];
        ll c=0,ans=0;
        for(ll i=0; i<n; i++){
             if(a[i]<=q)c++;
             if(i==n-1||a[i+1]>q){
                if(c>=k){
                    ll x=c-k+1;
                    ll b=(x*(x+1))/2;
                    ans+=b;
                }
                c=0;
             }
        }
        cout<<ans<<endl;
    }

      return 0;
}