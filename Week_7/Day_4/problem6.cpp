#include<bits/stdc++.h>
using namespace std;
#include<bitset>
int main()
{
   int x,y,z;
   cin>>x>>y>>z;
   int ar[10010],i,j;
   for(i=0;i<=y;i++)
   {
       cin>>ar[i];
   }
   string s;
   int ans=0;
   s=bitset<20>(ar[y]).to_string();
   for( i=0;i<y;i++)
   {
       string s1=bitset<20>(ar[i]).to_string();
       int cnt=0;
       for(j=0;j<20;j++)
       {
           if(s[j]!=s1[j]) cnt++;
       }
       if(cnt<=z) ans++;
   }
   cout<<ans<<endl;
}
