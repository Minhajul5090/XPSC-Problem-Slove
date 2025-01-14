#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;   cin>>n;
        int z=0,o=0;
        ll s=0;
        while(n--){
            int x;   cin>>x;
            if(x==0)z++;
            if(x==1)o++;
        }
        ll ans=pow(2,z);
        cout<<ans*o<<endl;
    }

      return 0;
}