#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int n, m;
            if(x%k==0)m=(x/k)*2-1;
            else m=((x/k)+1)*2-1;
     
            if(y%k==0)n=(y/k)*2;
            else n=((y/k)+1)*2;
     
            if(n>m)cout<<n<<endl;
            else cout<<m<<endl;
    }

      return 0;
}