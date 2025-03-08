#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;   cin>>n;
        set<pair<int,int>>s;
        for(int i=1; i<=n; i++){
            int x,y;   cin>>x>>y;
            s.insert({x,y});
        }
        ll s1=0,s2=0;
        for(auto i:s){
            int x=i.first,y=i.second;
            if(s.find({x,1-y})!=s.end())s1+=(n-2);
            if(s.find({x-1,1-y})!=s.end() && s.find({x+1,1-y})!=s.end())s2++;
        }
        cout<<(s1/2)+s2<<"\n";
    }

      return 0;
}