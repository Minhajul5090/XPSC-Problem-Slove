#include <bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    CODE
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<ll> a(n), p(n), max_a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        p[0] = a[0];
        max_a[0] = a[0];
        for (int i = 1; i < n; i++) {
            p[i] = p[i - 1] + a[i];
            max_a[i] = max(max_a[i - 1], a[i]);
        }
        while (q--) {
            ll k;
            cin >> k;

    
            auto it = upper_bound(max_a.begin(), max_a.end(), k);
            int steps = it - max_a.begin();
            if (steps == 0) cout << "0 ";
            else cout << p[steps - 1] << " ";
        }
        cout << endl;
    }
    return 0;
}
