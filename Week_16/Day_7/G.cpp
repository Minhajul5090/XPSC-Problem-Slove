#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const int N = 1e5+5 ; 

vector <int> gp[N] ; 
int n, ans ; 

int dfs(int u, int p) {
    int c = 1 ; 
    for (auto i: gp[u]) {
        if (i == p) continue ; 
        int temp = dfs(i, u) ; 
        if (temp % 2 == 0) ++ans ; 
        c += temp ; 
    }
    return c ; 
}

int main()
{
    CODE
    cin >> n ; 
    for (int i=1;i<n;++i) {
        int a, b; cin >> a >> b; 
        gp[a].push_back(b) ; 
        gp[b].push_back(a) ; 
    }
    if (n&1) {
        cout<<-1<<"\n" ; 
        
    }
   else{
     dfs(1, -1) ; 
    cout << ans << "\n" ; 
   }
      return 0;
}