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
        int x=sqrt(n);
        int c=0;
        for(int i=1; i<=x; i++){
          if(n%i==0){
            if(i==n/i)c++;
            else c+=2;
        }
        }
        cout<<c<<"\n";
    }

      return 0;
}