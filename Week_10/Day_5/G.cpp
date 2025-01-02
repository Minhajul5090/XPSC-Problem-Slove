#include <bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    CODE
    int n;
    ll x;
    cin >> n >> x;
    
    vector<pair<ll, int>> v(n); 
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i + 1; 
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        ll target = x - v[i].first; 
        int left = i + 1, right = n - 1;

        while (left < right) {
            ll sum = v[left].first + v[right].first;
            if (sum == target) {
                cout << v[i].second << " " << v[left].second << " " << v[right].second << endl;
                return 0;
            }
            if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
