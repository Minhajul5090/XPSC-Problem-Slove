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
        int ar[n];
        for(int i=0; i<n; i++)cin>>ar[i];
        sort(ar,ar+n);
        int a=ar[n-1]-ar[2];
        int b=ar[n-3]-ar[0];
        int c=ar[n-2]-ar[1];
       cout<<min({a,b,c})<<endl;
    }

      return 0;
}