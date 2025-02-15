#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,c,q;   cin>>n>>c>>q;
        string s;  cin>>s;
        vector<pair<ll,ll>>v;
        ll len=n;
        while(c--){
            ll l, r; cin>>l>>r;
            v.push_back({len,l-1});
            len+=(r-l+1);
        }
       while(q--){
        ll i;   cin>>i;
        i--;
        for(int j=v.size()-1;j>=0; j--){
            ll x=v[j].first;
            ll y=v[j].second;
            if(i>=x){
                i=y+(i-x);
            }
        }
        cout<<s[i]<<"\n";
       }
    }

      return 0;
}