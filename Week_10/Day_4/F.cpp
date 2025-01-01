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
    map<int,int>mp;
    ll j=0,c=0;
    for(int i=0; i<n; i++){
       mp[v[i]]++;
       while(mp.size()>k){
        mp[v[j]]--;
        if(mp[v[j]]==0)mp.erase(v[j]);
        j++;
       }
       c+=i-j+1;
    }
    cout<<c;
      return 0;
}