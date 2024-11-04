#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int a,b,c;  cin>>a>>b>>c;
        if(a+b==c)cout<<"+"<<endl;
        else cout<<"-"<<endl;
    }

      return 0;
}