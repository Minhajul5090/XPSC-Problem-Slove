#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll x,y,n,s;   cin>>x>>y>>n>>s;
        ll a=s/n;
       
        if(s%n==0 && a<=x)cout<<"YES"<<endl;
        else if(s<=y)cout<<"YES"<<endl;
        else if(a>x && (s-x*n)<=y)cout<<"YES"<<endl;
        else if(a<=x && ((s-a*n))<=y)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

      return 0;
}