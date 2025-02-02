#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template<typename T>using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    CODE
    int n,k;   cin>>n>>k;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    int x=k;
    if(k%2==0)x--;
    pbds<pair<int,int>>p;
    vector<pair<int,int>>ans;
    for(int i=0; i<k; i++)p.insert({v[i],i});
    auto it=p.find_by_order(x/2);
    ans.push_back(*it);
    int j=0;
    p.erase({v[j],j});j++;
    for(int i=k; i<n; i++){
        p.insert({v[i],i});
        auto it=p.find_by_order(x/2);
        ans.push_back(*it);
        p.erase({v[j],j});j++;
    }
    for(auto i:ans)cout<<i.first<<" ";
      return 0;
}
