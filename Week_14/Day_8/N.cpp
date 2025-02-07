#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
//  int index=p.order_of_key(x);
// auto it=find_by_order(index);
template<typename T>using order_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n; cin >> n;
        vector<pair<int, int>> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].first >> a[i].second;
        }
        sort(a.begin(), a.end());
        order_set<int> st;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            ans += (st.size() - st.order_of_key(a[i].second));
            st.insert(a[i].second);
        }
        cout << ans << '\n';
    }

      return 0;
}