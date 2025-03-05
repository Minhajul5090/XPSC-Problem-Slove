#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;
   cin>>n;
   int x,y;
   cin>>x>>y;
   if(x<y){
      if(n%x==0)cout<<n/x<<endl;
     else cout<<(n/x)+1<<endl;
   }
   else {
       if(n%y==0)cout<<n/y<<endl;
     else cout<<(n/y)+1<<endl;
   }
    }

      return 0;
}