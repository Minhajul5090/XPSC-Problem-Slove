#include <bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    CODE
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        ll c = 0;
        for (int i = 0; i < n - 1; i++) {
            int low = lower_bound(v.begin() + i + 1, v.end(), l - v[i]) - v.begin();
            int high = upper_bound(v.begin() + i + 1, v.end(), r - v[i]) - v.begin() - 1;
            if (low <= high) {
                c += (high - low + 1);
            }
        }

        cout << c << endl;
    }

    return 0;
}
