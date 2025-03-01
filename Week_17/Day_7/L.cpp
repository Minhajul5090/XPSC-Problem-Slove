#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,m;    cin>>n>>m;
        multiset<ll>s1,s2;
        for(int i=1;i<n; i++){ll x;  cin>>x; s1.insert(x);}
        for(int i=1;i<=n; i++){ll x;  cin>>x; s2.insert(x);}
        s1.insert(1);
        int ans=0;
        for(auto i:s1){
            auto it=s2.upper_bound(i);
            if(it==s2.end())ans++;
            else s2.erase(s2.find(*it));
        }
        cout<<ans<<"\n";
    }

      return 0;
}