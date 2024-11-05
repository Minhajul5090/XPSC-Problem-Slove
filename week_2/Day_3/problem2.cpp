#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
        int n;    cin>>n;
        vector<ll>v(n);
        set<ll>s;
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
       sort(v.begin(),v.end());
       ll j=1,ans=0;
       for(ll i=0; i<n; i++){
        if(v[i]>=j){
            ans++;
            j++;
        }
       }
       cout<<ans<<endl;

      return 0;
}