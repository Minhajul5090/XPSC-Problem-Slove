#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n ; cin >> n ; 
    string s; cin >> s ; 
    int ans = n, ok = 0 ; 
    for (char c='a';c<='z';++c) {
        int cnt = 0, cur = 1 ; 
        for (int i=0,j=n-1;i<j;) {
            if (s[i] != s[j]) {
                if (s[i]==c) ++i ; 
                else if (s[j]==c) --j ; 
                else {
                    cur = 0 ; 
                    break ; 
                }
                ++cnt ; 
            }
            else {
                ++i, --j ; 
            }
        }
        if (cur) {
            ans = min(ans, cnt) ; 
            ok = true ; 
        }
    }
    if (!ok) ans = -1 ; 
    cout << ans << endl ; 
    }

      return 0;
}