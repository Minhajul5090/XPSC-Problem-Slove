#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n,m;         cin>>n>>m;
    ll a[n];
     map<ll,ll>mp;
     set<ll>s;
     vector<ll>v;
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }
    ll c=0;
    for(ll i=n; i>=1; i--){
        if(s.insert(a[i]).second){
            c++;
        }
       mp[i]=c;
    }

    //for(int i:v)cout<<i<<" ";
    while(m--){
        int x;    cin>>x;
      
       cout<<mp[x]<<endl;
    }
    

      return 0;
}