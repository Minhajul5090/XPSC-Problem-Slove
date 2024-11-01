#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    set<string>s;
     vector<string>v;
   for(int i=0; i<t; i++){
      string a;   cin>>a;
      v.push_back(a);
      s.insert(a); 
    }
   for(int i=t-1; i>=0; i--){
    auto it=s.find(v[i]);
    if(it!=s.end()){
        cout<<v[i]<<endl;
        s.erase(it);
    }
   }
      return 0;
}