#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,m,h;   cin>>n>>m>>h;
        int a[n],b[m];
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<m; i++)cin>>b[i];
        sort(a,a+n,greater<int>());
        sort(b,b+m,greater<int>());
        int x=min(n,m);
        int s=0;
        for(int i=0; i<x; i++){
            if(b[i]*h<=a[i])s+=(b[i]*h);
            else s+=a[i];
        }
        cout<<s<<endl;
    }

      return 0;
}