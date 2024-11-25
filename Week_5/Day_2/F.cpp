#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;    cin>>n;
        int x;
        if(n%2==0)x=(n/2);
        else x=(n/2)+1;
        cout<<x<<endl;
       int i=1,j=n*3;
       while (x--)
       {
         cout<<i<<" "<<j<<endl;
         i+=3;
         j-=3;
       }
       
        
    }

      return 0;
}