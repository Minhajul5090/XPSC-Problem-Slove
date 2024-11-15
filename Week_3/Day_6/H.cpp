#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n;   cin>>n;
        string s;  cin>>s;
        vector<ll>ans;
        vector<ll>v;
        ll sum=0;
        for(ll i=0; i<n; i++){
           if(s[i]=='R'){
            sum+=(n-(i+1));
            v.push_back(n-(i+1));
           }
           else {
            sum+=i;
            v.push_back(i);
           }
        }
        sort(v.begin(),v.end());
        for(ll i=0; i<n; i++){
            ll a=n-v[i]-1;
            if(a>v[i]){
                sum-=v[i]; sum+=a;
                ans.push_back(sum);
            }
            else ans.push_back(sum);
        }
       
        for(auto i:ans)cout<<i<<" ";
        cout<<endl;
       
    }

      return 0;
}