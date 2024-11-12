#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    // int t;         cin>>t;
    
        int n,m;   cin>>n>>m;
        int a[n];
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        ll sum=0;
        for(int i=1;i<=m; i++){
            int x;   cin>>x;
            sum+=mp[x];
        }
        cout<<sum;

      return 0;
}