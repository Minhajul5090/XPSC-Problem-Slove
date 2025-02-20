#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const int maxN = 3e5 + 9;
vector<int>gp[maxN], op(maxN);
string s;
 
void dfs(int u) {
   if (gp[u][0] != 0) {
      int v = gp[u][0];
      if (s[u - 1] != 'L') {
         op[v] = op[u] + 1;
      }
      else {
         op[v] = op[u];
      }
      dfs(v);
   }
   if (gp[u][1] != 0) {
      int v = gp[u][1];
      if (s[u - 1] != 'R') {
         op[v] = op[u] + 1;
      }
      else {
         op[v] = op[u];
      }
      dfs(v);
   }
}
int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;
        cin >> n;
        cin >> s;
        for (int i = 1;i <= n;i++) {
           gp[i].clear();
           op[i] = 0;
        }
        for (int i = 1;i <= n;i++) {
           int u, v;
           cin >> u >> v;
           gp[i].push_back(u);
           gp[i].push_back(v);
        }
        dfs(1);
        int ans = INT_MAX;
        for (int i = 1;i <= n;i++) {
           if (gp[i][0] == 0 && gp[i][1] == 0) {
              ans = min(ans, op[i]);
           }
        }
        cout << ans << '\n';
    }

      return 0;
}