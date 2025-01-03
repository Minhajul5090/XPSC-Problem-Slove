#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n;   cin>>n;
    vector<int>v;
    while(n--){
        int x; cin>>x;
        auto it=upper_bound(v.begin(),v.end(),x);
        if(it==v.end())v.push_back(x);
        else v[it-v.begin()]=x;
    }
    cout<<v.size();
      return 0;
}