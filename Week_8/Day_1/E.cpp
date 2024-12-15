#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n;  cin>>n;
        string s="ab",s1="ba";
       string v="";
        if(n==1)cout<<"a";
        else{
            v+=s;
        for(int i=2; i<=n/2; i++){
           if(v[v.size()-1]=='b')v+=s1;
           else v+=s;
        }
        if(n%2)v.push_back(v[v.size()-1]);
        for(auto i:v)cout<<i;
        }
      return 0;
}