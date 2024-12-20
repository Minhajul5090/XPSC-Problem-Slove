#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n,i;
        cin>>n;
        vector<ll>v(n+1),p;
        for(i=1;i<=n;i++) cin>>v[i];
        if(v[n]==1) cout<<"NO"<<endl;
        else{
            ll j=n,c=0,f=0;
            while(j>0){
            while(j>0 && v[j-1]==1){
            j--; c++; p.push_back(0); f=1;
        }
        if(!c && !f) {
            p.push_back(0); j--;
        }
        else if(c){
            p.push_back(c); c=0; j--; f=0;
        }
 
 
    }
    cout<<"YES"<<endl;
    for(auto x: p) cout<<x<<' ';
    cout<<endl;
    }
    }

      return 0;
}