#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,q; cin>>n>>q; 
        vector<ll>v(n);
        ll mx=INT_MIN;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mx=max(v[i],mx);
        }
       set<int>s;
        while (q--)
        {
            int x;  cin>>x;
            if(s.count(x))continue;
            s.insert(x);
            ll a=(1LL<<x);
            for(int i=0; i<n; i++){
                if(v[i]%a==0){
                    v[i]+=(1LL<<(x-1));
                }
            }
        }
        for(auto i:v)cout<<i<<" ";
        cout<<endl;
        
    }

      return 0;
}