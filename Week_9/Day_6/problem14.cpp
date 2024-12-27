#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
       int n;  cin>>n;
       vector<int>v(n+1);
       vector<int>a(1005,-1);
       for(int i=1; i<=n; i++){
        cin>>v[i];
        a[v[i]]=i;
       }
       int mx=-1;
       for(int i=1000; i>0; i--){
        for(int j=i; j>0; j--){
            if(a[i]>0 && a[j]>0 &&__gcd(i,j)==1)mx=max(mx,a[i]+a[j]);
        }
       }
       cout<<mx<<endl; 
    }

      return 0;
}