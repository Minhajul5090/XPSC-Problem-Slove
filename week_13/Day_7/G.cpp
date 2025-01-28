#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        string s;   cin>>s;
        map<char,int>mp;
        for(auto i:s)mp[i]++;

        int l=0,r=0,d=0,u=0;
        for(auto i:mp){
         if(i.first=='L')l=i.second;
         if(i.first=='R')r=i.second;
         if(i.first=='U')u=i.second;
         if(i.first=='D')d=i.second;
        }
        int x=min(l,r),y=min(d,u);
        if(x==0 && y==0){cout<<0<<"\n";continue;}
        else if(x==0){cout<<2<<"\n"<<"UD"<<"\n";continue;}
        else if(y==0){cout<<"2"<<"\n"<<"LR"<<"\n"; continue;}
        string s1;
        int x1=x,y1=y;
        while(x--)s1.push_back('L');
        while(y--)s1.push_back('U');
        while(x1--)s1.push_back('R');
        while(y1--)s1.push_back('D');
    
            cout<<s1.size()<<"\n";
            for(auto i:s1)cout<<i;
            cout<<"\n";
        
    }

      return 0;
}