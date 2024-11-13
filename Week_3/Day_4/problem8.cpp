#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n,m;         cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<m; i++)cin>>b[i];
    int i=0,j=0;
    vector<int>v;
    while(i<n || j<m){
        if(i>=n){
             v.push_back(b[j]);
             j++;
        }
        else if(j>=m){
        v.push_back(a[i]); 
        i++;
        }
      else if(a[i]<b[j]){
        v.push_back(a[i]); 
        i++;
       }
       else {
        v.push_back(b[j]);
        j++;
       }
    }
    for(int i:v)cout<<i<<" ";
      return 0;
}