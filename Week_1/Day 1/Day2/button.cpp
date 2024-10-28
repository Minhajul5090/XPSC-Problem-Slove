#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b; cin>>a>>b;
    int mx=max(a,b);
    if((mx*2)-1>a+b)cout<<mx*2-1;
    else cout<<a+b;
      return 0;
}