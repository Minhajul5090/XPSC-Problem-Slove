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
        string s;  cin>>s;
        map<char, int>mp;
        for(char i:s)mp[i]++;
        vector<pair<int,char>>v;
        for(auto i: mp)v.push_back({i.second,i.first});
        sort(v.begin(),v.end(), greater<pair<int,char>>());
        string a;
        while(v.size()){
            for(int i=v.size()-1; i>=0; i--){
                a.push_back(v[i].second);
                v[i].first--;
                if(v[i].first==0)v.pop_back();
            }
        }
        cout<<a<<endl;
       
    }

      return 0;
}