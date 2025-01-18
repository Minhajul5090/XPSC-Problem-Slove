#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
         int a, b, l;
     cin >> a >> b >> l;
    
      set<int> s;
    while (true) {
        int x = l;
        while (true) {
            s.insert(x);
            if (x % b != 0) {
                break;
            }
            x /= b;
        }
        if (l % a != 0) {
            break;
        }
        l /= a;
    }
    
     cout << s.size() << "\n";
    }

      return 0;
}