#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   int x,n;   cin>>x>>n;
   vector<int>v(n),a;
   set<int>s={0,x};
   multiset<int>m={x};
   for(int i=0; i<n; i++){
     int p;   cin>>p;
     auto it=s.upper_bound(p);
     int r=*it, l=*prev(it);
     m.erase(m.find(r-l));
     m.insert(p-l);
     m.insert(r-p);
     s.insert(p);
     cout<<*m.rbegin()<<" ";
   }
      return 0;
}