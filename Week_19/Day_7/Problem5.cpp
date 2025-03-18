#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const int  N = 1e5 + 9;
int at[N * 4];

void build(int n, int b, int e) {
   if (b == e) {
      at[n] = 0;
      return;
   }
   int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   build(l, b, mid);
   build(r, mid + 1, e);
   at[n] = at[l] + at[r];
}

void update(int n, int b, int e, int i, int v) {
   if (i<b || i>e) {
      return;
   }
   if (b == e) {
      at[n] = v;
      return;
   }
   int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   update(l, b, mid, i, v);
   update(r, mid + 1, e, i, v);
   at[n] = at[l] + at[r];
}

int query(int n, int b, int e, int i, int j) {
   if (e < i || j < b) {
      return 0;
   }
   if (b >= i && e <= j) {
      return at[n];
   }
   int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}
int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n, m, q;
        cin >> n >> m;
        vector<pair<int, int>> v(m);
        for (int i = 0;i < m;i++) {
           cin >> v[i].first >> v[i].second;
        }
        cin >> q;
        vector<int> que(q);
        for (int i = 0;i < q;i++) {
           cin >> que[i];
        }
  
        auto ok = [&](int mid) {
           build(1, 1, n);
  
           for (int i = 0;i <= mid;i++) {
              update(1, 1, n, que[i], 1);
           }
  
           bool f= false;
           for (int i = 0;i < m;i++) {
              int L = v[i].first, R = v[i].second, seg_len, one, zero;
              seg_len = (R - L) + 1;
              one = query(1, 1, n, L, R);
              zero = (seg_len - one);
              if (one > zero) {
                 f = true;
                 break;
              }
           }
           return f;
           };
  
        int l = 0, r = q - 1, mid, ans = -1;
        while (l <= r) {
           mid = l + (r - l) / 2;
           if (ok(mid)) {
              ans = mid;
              r = mid - 1;
           }
           else l = mid + 1;
              
           
        }
  
        if (ans != -1) {
           ans++;
        }
        cout << ans << "\n";
    }

      return 0;
}