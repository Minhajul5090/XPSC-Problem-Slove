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
        if(a==1)cout<<1<<endl;
        else if(c==1){
            int x=abs(b-c);
            int y=abs(a-1);
            if(x<y)cout<<2<<endl;
            else if(y<x)cout<<1<<endl;
            else cout<<3<<endl;
        }
        else {
            int x=abs(a-1);
            int y=abs(b-c);
             y+=(abs(c-1));
            if(x<y)cout<<1<<endl;
            else if(x>y)cout<<2<<endl;
            else cout<<3<<endl;
        }
    }

      return 0;
}