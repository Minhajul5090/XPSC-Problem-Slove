#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,k;   cin>>n>>k;
        string s;  cin>>s;
        map<char,int>mp;
        for(int i=0; i<n; i++)mp[s[i]]++;
        int e=0;
        for(auto i:mp){
         if(i.second%2!=0) {
            e++;
         }
        }
        if(k>=e-1)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }

      return 0;
}