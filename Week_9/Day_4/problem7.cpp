#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   
      ll l,r;  cin>>l>>r;
      cout<<"YES"<<endl;
      for(ll i=l; i<=r; i+=2){
        cout<<i<<" "<<i+1<<endl;
      }
    

      return 0;
}