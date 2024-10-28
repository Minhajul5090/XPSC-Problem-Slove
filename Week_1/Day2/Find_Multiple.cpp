#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int i=1;
    while(1){
      long long ans=c*i;
      if(ans>=a && ans<=b){
        cout<<ans; break;
      }
      if(ans>b){
        cout<<-1;break;
    }
    i++;
    } 
      return 0;
}