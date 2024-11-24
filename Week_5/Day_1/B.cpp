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
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        char ch='a';
        string s;
        map<char,int>mp;
        for(int i=0; i<n; i++){
            if(v[i]==0){
             s.push_back(ch); 
             mp[ch]++;
             ch++;
            }
            else{
                for(auto j:mp){
                    if(j.second==v[i]){
                        s.push_back(j.first);
                        mp[j.first]++;
                        break;
                    }
                }
            }
        } 
       // for(auto i:mp)cout<<i.first<<" "<<i.second<<endl;
       cout<<s<<endl;
       
    }

      return 0;
}