#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;   cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
      int a=ceil((y)*1.0/2);
     int b=7*a;
      int c=ceil((x+y*4)*1.0/15);
    if(y<=2)  cout<<c<<endl;
     else if(b>=x) cout<<a<<endl;
     else if((y/2==a)) cout<<a+ceil((x-b)*1.0/15)<<endl;
     else if(y/2!=a) {
        int k=x-(((y/2)*7)+11);
        cout<<a+ceil(k*1.0/15)<<endl;
     }
    }
        }