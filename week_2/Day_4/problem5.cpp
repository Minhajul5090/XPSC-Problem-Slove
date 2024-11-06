#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;        cin>>t;
        set<pair<int,int>>s;
         multiset<pair<int,int>>ml;
         vector<int>v;
         int c=1;
    for(int i=1; i<=t; i++){
        int n;   cin>>n;
        if(n==1){
            int x;  cin>>x;
            s.insert({c,x});
            ml.insert({x,-c});
            c++;
        }
      else if(n==2){
           int pos=s.begin()->first,val=s.begin()->second;
           v.push_back(pos);
           s.erase(s.begin());
           ml.erase({val,-pos});
        }
        else{
          int pos=-ml.rbegin()->second,val=ml.rbegin()->first;
          v.push_back(pos);
          ml.erase(--ml.end());
          s.erase({pos,val});
        }
        
    }
    for(auto i:v)cout<<i<<" ";
    cout<<endl;

      return 0;
}