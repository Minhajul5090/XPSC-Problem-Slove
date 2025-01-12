#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n, k; cin>>n>>k;
    ll tmp=1, cnt=1;
    while(1)
    {
        ll m = (n+1)/2;
        if(m < k)
        {
            n-=m;
            k-=m;
        }
        else{
            k*=2; k--;
            cout<<cnt*k<<endl; break;
        }
        cnt*=2;
    }
    }

      return 0;
}