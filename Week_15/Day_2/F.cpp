#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
    int t; cin>>t;
    while(t--){
        ll n;  cin>>n;
        vector<ll>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        ll sum=0,maxdf=0;
        for(int i=1; i<n; i++){
            if(v[i]<v[i-1]){
                sum+=v[i-1]-v[i];
                maxdf = max(maxdf, (v[i-1]-v[i]));
                v[i]=v[i-1];
            }
        }
        sum+=maxdf;
        cout<<sum<<endl;
    }

      return 0;
}