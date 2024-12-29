#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    
     string s;   cin>>s;
     map<char,int>mp;
     for(auto i:s)mp[i]++;
     int c=0;
     for(auto i:mp){
        if(i.second%2!=0)c++;
     }
     if(c>1)cout<<"NO SOLUTION";
     else{
        string a,b,c;
        for(auto i:mp){
            if(i.second%2==0){
                for(int j=1; j<=i.second/2; j++)a.push_back(i.first);
                b=a;
            }
            else  for(int j=1; j<=i.second; j++)c.push_back(i.first);
        }
        reverse(b.begin(), b.end());
        cout<<a<<c<<b;
     }
      return 0;
}