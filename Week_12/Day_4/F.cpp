#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   int n;   cin>>n;
    cout<<n/2<<"\n";
    for(int i=1; i<n/2; i++)cout<<2<<" ";
    if(n%2)cout<<3;
    else cout<<2;

      return 0;
}