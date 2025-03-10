#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n,i,c=1,j,k;   cin>>n;
vector<string>s(n);
for(i=0;i<n;i++) cin>>s[i];
ll a[n+2][n+2];
memset(a,0,sizeof(a));
for(i=1;i<=n;i++,c++)
{
    a[i][c]=1;
    for(j=0;j<n;j++)
    {
        if(s[i-1][j]=='1')
        {
      
            for(k=1;k<=n;k++)
            {
                if(a[i][k]==1) { a[j+1][k]=1;}
            }
        }
    }
}
for(i=1;i<=n;i++)
{
    ll cnt=0;
    for(j=1;j<=n;j++)
    {
        if(a[i][j]==1) cnt++;
    }
    cout<<cnt<<" ";
    for(j=1;j<=n;j++)
    {
        if(a[i][j]) cout<<j<<" ";
    }
    cout<<endl;
}
 
}

      return 0;
}