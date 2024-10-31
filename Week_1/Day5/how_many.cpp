#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int s,t;         cin>>s>>t;
    ll count=0;
    for(int i=0; i<=s; i++ ){
        for (int j=0; j<=s-i; j++){
            for(int k=0; k<=s-i-j; k++){
                if(i*j*k<=t)count++;
            }
        }
    }
       cout<<count;
      return 0;
}