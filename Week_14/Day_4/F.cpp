#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    ll n,m;   cin>>n>>m;
    multiset<ll>st;
    while(n--){
        ll x;  cin>>x;
        st.insert(x);
    }
    map<ll, ll>mp;
    ll j=1;
    for(auto i:st){
        mp[i]=j; j++;
    }
   while(m--){
    ll x; cin>>x;
    auto it=st.upper_bound(x);
    if(it==st.begin())cout<<0<<" ";
    else {
        it--;
        cout<<mp[*it]<<" ";
    }
   }

      return 0;
}