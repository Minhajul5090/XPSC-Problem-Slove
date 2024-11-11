#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n,m;         cin>>n>>m;
    int a[n+1];
    int b[m+1];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<m; i++){
          int x;  cin>>x;
         int ans=lower_bound(a,a+n,x)-a;
          cout<<ans<<" ";
    }
   
    

      return 0;
}