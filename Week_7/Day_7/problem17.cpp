#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;   cin>>n;
        int x=__lg(n)-1;
        int k=x;
       for(int i=0; i<=x;i++){
          k=k|(1<<i);
       }
       if(n==1)k=0;
       cout<<k<<endl;
    }

      return 0;
}