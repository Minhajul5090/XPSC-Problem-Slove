#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n,k;   cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    map<ll, int>mp;
    mp[0]=1;
    int c=0;
    ll s=0;
    for(int i=0; i<n; i++){
       s+=v[i];
       if(mp.find(s-k)!=mp.end())c+=mp[s-k];
       mp[s]++;
    }
    
    cout<<c<<endl;

      return 0;
}