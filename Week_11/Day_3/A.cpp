#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;    cin>>n;
      ll s=0, c=0;
        for(int i=1; i<=n; i++){
            int x;   cin>>x;
            s+=x;
            if(x==1)c++;
        }
       ll a=n-c;
       ll b=s-c*2;
       if(b<a || n==1)cout<<"NO"<<"\n";
       else cout<<"YES"<<"\n";       
    }

      return 0;
}