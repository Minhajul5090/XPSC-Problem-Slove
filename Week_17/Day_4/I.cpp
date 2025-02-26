#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;


ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}

int main() {
    CODE
    int t; cin >> t;
    while (t--) {
        ll n, x, y; cin >> n >> x >> y;
        ll count_x = n / x;
        ll count_y = n / y;
        ll count_lcm = n / lcm(x, y);

      
        count_x -= count_lcm;
        count_y -= count_lcm;

        ll sum_x = count_x * (2 * n - count_x + 1) / 2;

        ll sum_y = count_y * (count_y + 1) / 2;

        // ll sum_lcm = count_lcm * (2 * n - count_lcm + 1) / 2;

        ll result = sum_x - sum_y;
        cout << result << "\n";
    }

    return 0;
}