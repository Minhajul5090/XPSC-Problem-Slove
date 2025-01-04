#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   int n;   cin>>n;
   multiset<int>s;
   while(n--){
    int x;  cin>>x;
    s.insert(x);
   }
   int q;   cin>>q;
   while(q--){
    int x;   cin>>x;
    auto it=s.lower_bound(x);
    auto it1=s.upper_bound(x);
    if(*it==*s.begin())cout<<"X ";
    else cout<<*prev(it)<<" ";
    if(it1==s.end())cout<<"X"<<endl;
    else cout<<*it1<<endl;
   }

      return 0;
}