#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const ll N=1e9+7;

ll power(ll a, ll b){
    ll result=1;
    while(b>0){
        if(b&1) result=(result * a)%N;
        a=(a*a)%N;
        b/=2;
    }
    return result;
}

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int a,b;   cin>>a>>b;
        cout<<power(a,b)<<endl;
    }

      return 0;
}