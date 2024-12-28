#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
        int n; cin >> n;
    vector < ll > a(n) ;
    ll mx = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        mx = max(mx,a[i]);
    }
    ll total_gcd = 0, dif = 0;
    for(int i = 0; i < n; i++){
        dif+=(mx - a[i]);
        total_gcd = __gcd(total_gcd,mx - a[i]);
    }
    cout << dif/total_gcd <<' '<< total_gcd <<'\n';
    

      return 0;
}