#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int x,y;   cin>>x>>y;
        if(((x%2!=0 && y%2!=0) || (x%2==0 && y%2==0) )&& x>=y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

      return 0;
}