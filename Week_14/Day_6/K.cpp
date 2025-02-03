#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
//  int index=p.order_of_key(x);
// auto it=find_by_order(index);
template<typename T>using order_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;   cin>>n;
        vector<int>v(n);
        order_set<int>s;
        for(int i=0; i<n; i++){cin>>v[i];}
        ll ans=0;
        for(int i=0; i<n; i++){
            s.insert(v[i]);
            int x=s.size();
            int y=s.order_of_key(v[i]);
            ans+=(x-(y+1));
        }
        cout<<ans<<"\n";
    }

      return 0;
}
