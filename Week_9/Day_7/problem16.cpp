#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
       int n, m,a; cin >> n >> m>>a;
    int cnt = 32;
    while(cnt){
        int x = m - n % m;
        n = n + min(a, x);
        a-=x;
        while((n % m) == 0){
            n/=m;
        }
        
        if(a <= 0 || n == 1)break;
        cnt--;
    }
    
    int x = a % (m - (n % m));
    cout << (n + x)<< '\n';  
    }

      return 0;
}