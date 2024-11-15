#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        string s,s1;  cin>>s>>s1;
        int x=s.size(),x1=s1.size();
        char c=s[x-1],c1=s1[x1-1];
        if(c==c1){
            if(c=='S' && x>x1)cout<<"<"<<endl;
            else if(c=='S' && x<x1)cout<<">"<<endl;
            else if(c=='S' && x==x1) cout<<"="<<endl;

            if(c=='L' && x>x1)cout<<">"<<endl;
            else if(c=='L' && x<x1)cout<<"<"<<endl;
            else if(c=='L' && x==x1) cout<<"="<<endl;

            if(c=='M')cout<<"="<<endl;
        }
        else if(c=='L')cout<<">"<<endl;
        else if(c1=='L')cout<<"<"<<endl;
        else if(c=='S' && c1=='M')cout<<"<"<<endl;
        else cout<<">"<<endl;
    }

      return 0;
}