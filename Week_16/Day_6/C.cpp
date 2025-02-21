#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n;   cin >> n;
    vector<int> gp[n + 1], b(n + 1), a(n + 1);
    int r;
    for (int i = 1;i <= n;i++) {
       int x, y;
       cin >> x >> y;
       int  u = x, v = i;
       if (u != -1) {
          gp[u].push_back(v);
       }
       else {
          r = i;
       }
       if (y == 1) {
          b[u]++;
          a[v] = 1;
       }
    }
 
    vector<int> ans;
    for (int i = 1;i <= n;i++) {
       if (r == i) {
          continue;
       }
       if ((gp[i].size() == b[i] && a[i] == 1)) {
          ans.push_back(i);
       }
    }
 
    if (ans.empty()) {
       cout << -1 << '\n';
    }
    else {
       for (int i = 0;i < ans.size();i++) {
          cout << ans[i] << " ";
       }
       cout << '\n';
    }

      return 0;
}