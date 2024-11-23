#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        string s;  cin>>s;
        vector<pair<int,int>>v;
        int a=min((s[0]-'a'+1),s[s.size()-1]-'a'+1);
        int b=max((s[0]-'a'+1),s[s.size()-1]-'a'+1);
        //cout<<a<<" "<<b;
        int y;
       v.push_back({(s[0]-'a'+1),1});
        for(int i=1; i<s.size()-1;i++){
            int x=s[i]-'a'+1;
            if(x>=a && x<=b)v.push_back({x,i+1});
        }
       if(s[0]>s[s.size()-1]) sort(v.begin()+1,v.end(),greater<pair<int,int>>());
       else sort(v.begin()+1,v.end());

       v.push_back({(s[s.size()-1]-'a'+1),s.size()});
        cout<<abs(a-b)<<" "<<v.size()<<endl;
        for(auto i:v)cout<<i.second<<" ";
        cout<<endl;
        
    }

      return 0;
}