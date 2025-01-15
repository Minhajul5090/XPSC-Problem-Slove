#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        string s,s1;   cin>>s>>s1;
        
        sort(s.begin(),s.end());
        bool  f=false;
        int x=s.size(),y=s1.size();
        for( int i=0; i<=y-x; i++ ){
            string a= s1.substr(i,x);
            sort(a.begin(),a.end());
            if(a==s){f=true; break;}
        }
        if(f)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

      return 0;
}