#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;  cin>>n;
        ll sum=(n*(n+1))/2;
       vector<pair<int ,int>>v;
        int x=n-2,y=(n+n-1)/2;
        v.push_back({n,n-1});
        y++;
        while(x>=1){
           v.push_back({y,x});
           y=(x+y)/2; 
           x--;
        }
        cout<<y<<endl;
        for(auto i:v)cout<<i.first<<" "<<i.second<<endl;
        
    }

      return 0;
}