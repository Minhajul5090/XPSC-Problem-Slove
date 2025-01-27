#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,x,y;  cin>>n>>x>>y;
        bool f=false;

          while (n>20 && x>0)
          {
           n=(n/2)+10;
           x--;
          }
          
      while(y--)n-=10;

      if(n<=0) {cout<<"YES"<<endl;}
      else cout<<"NO"<<"\n";
        
    }

      return 0;
}