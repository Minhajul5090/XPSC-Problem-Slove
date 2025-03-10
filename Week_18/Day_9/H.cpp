#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
          cin >> a[i];
        }
        vector<ll> l(n + 1, 0), r(n + 1, 0);
        for (int i = 1; i < n; i++) {
          r[i] = abs(a[i] - a[i + 1]);
          if (i == 1 or abs(a[i] - a[i + 1]) < abs(a[i] - a[i - 1])) {
            r[i] = 1;
          }
          r[i] += r[i - 1];
        }
        for (int i = 2; i <= n; i++) {
          l[i] = abs(a[i] - a[i - 1]);
          if (i == n or abs(a[i] - a[i - 1]) < abs(a[i] - a[i + 1])) {
            l[i] = 1;
          }
          l[i] += l[i - 1];
        }
        int q; cin >> q;
        while (q--) {
          int x, y; cin >> x >> y;
          if (x < y) {
            cout << r[y - 1] - r[x - 1] << '\n';
          }
          else {
            cout << l[x] - l[y] << '\n';
          }
        }
    }

      return 0;
}