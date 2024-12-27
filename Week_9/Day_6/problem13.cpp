#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int a,b;  cin>>a>>b;
        ll z=(1ll*a*b);
        if(z-a==a)z*=z;
        if(z-a<=0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl<<a<<" "<<z-a<<" "<<z<<endl;
    }

      return 0;
}