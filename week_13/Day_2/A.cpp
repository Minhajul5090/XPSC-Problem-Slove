#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        for(auto &i:v)cin>>i;
        int mx=*max_element(v.begin(),v.end());
        int mn=*min_element(v.begin(),v.end());
        int ans = max(mx - v[0], v[n-1] - mn);
        for (int i = 0; i < n-1; i++)
        {
            ans = max(ans, v[i] - v[i+1]);
        }
        ans = max(v[n-1] - v[0], ans);
        cout << ans<<endl;
    }

      return 0;
}