#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template<typename T>using order_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    CODE
    int t;   cin>>t;
    while(t--){
    int n;    cin>>n;
     order_set<int>p;
     ll c=0;
   for(int i=0; i<n;i++){
    int x;   cin>>x;
    p.insert(x);
    int index=p.order_of_key(x);
    int y=p.size();
    c+=(y-(index+1));
   }
   cout<<c<<"\n";
    }
      return 0;
}
