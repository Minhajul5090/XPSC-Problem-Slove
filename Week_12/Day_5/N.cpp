#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        	ll a, b;
		cin >> a >> b;
		while(__gcd(a,b) >1){
			b /= __gcd(a,b);
		}
		if(b>1) cout << "NO\n";
		else cout << "YES\n";
    }

      return 0;
}