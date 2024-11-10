#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   int x,y,z;    cin>>x>>y>>z;
  double a=double(x)+double(y)*.5;
  double b=double(z)+double(y)*.5;
   if((x+y+z)<4){
    a+=(4-(x+y+z));
   }
   if(a>b)cout<<"YES";
   else cout<<"NO";

      return 0;
}