#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int x,y;    cin>>x>>y;
        if(x==y<3)cout<<x<<endl;
        else if(x%3==y%3)cout<<x%3<<endl;
        else cout<<0<<endl;
    }

      return 0;
}