#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
       vector<int> a(1000000);
        for(int i=2; i<=1000000; i++){
          if(a[i]==0){
            for(int j=2; j*i<=1000000; j++)a[i*j]=1;
          }
        }
        ll n;   cin>>n;
       
       while(n--){
        ll x;   cin>>x;
         ll sq=sqrt(x);
         if(x==1)cout<<"NO"<<"\n";
         else if(sq*sq==x && a[sq]==0)cout<<"YES"<<"\n";
         else cout<<"NO"<<"\n";
       }

      return 0;
}