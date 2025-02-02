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
     int n;    cin>>n;
   string s,s1;   cin>>s;
   s1=s;
   reverse(s1.begin(),s1.end());
   vector<int>v;
   map<char,set<int>>mp;
   for(int i=0; i<n; i++)mp[s[i]].insert(i);
   for(int i=0; i<n; i++){
    v.push_back(*mp[s1[i]].begin());
    mp[s1[i]].erase(mp[s1[i]].begin());
   }
   pbds<int>p;
   ll c=0;
   for(int i=0; i<n;i++){
    p.insert(v[i]);
    int x=p.order_of_key(v[i]);
    int y=p.size()-1;
    c+=(y-x);
   }
   cout<<c<<"\n";
      return 0;
}
