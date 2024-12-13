#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
         int n;  cin >> n;
    int ans=0;
    while(n--)
    {
        int x; cin >> x;
        ans=(ans|x);
    }
    cout << ans<<endl;
    }

      return 0;
}