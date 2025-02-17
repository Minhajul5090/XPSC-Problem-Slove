#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1;i <= n;i++) {
           cin >> v[i];
        }
   
        bool ok = false;
        for (int i = 1;i <= n;i++) {
           if (v[1] != v[i]) {
              ok = true;
              break;
           }
        }
   
        if (ok) {
           int c = -1;
           cout << "YES" << '\n';
           for (int i = 1;i <= n;i++) {
              if (v[i] != v[1]) {
                 cout << 1 << " " << i << '\n';
                 c = i;
              }
           }
           for (int i = 2;i <= n;i++) {
              if (v[i] == v[1]) {
                 cout << c << " " << i << '\n';
              }
           }
        }
        else {
           cout << "NO" << '\n';
        }
    }

      return 0;
}