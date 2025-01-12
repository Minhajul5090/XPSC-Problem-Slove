#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
         int n;cin>>n;
     vector<int>v(n);
     for(auto &i:v)cin>>i;
     int c=99;
     bool f =true;
     for(int i=n-1;i>=0;i--){
          if(v[i]>c){
               if(v[i]<10){
                cout<<"NO"<<endl;
                f=false;
                break;
               }
          int x=v[i]/10;
          int y=v[i]%10;
          if(x>y or y>c){
           cout<<"NO"<<endl;
             f=false;
               break;;
          }
                  c=x;
          }
        else c=v[i];
     }
    if(f) cout<<"YES"<<endl;
    }

      return 0;
}