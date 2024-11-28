#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n,k;  cin>>n>>k;
        vector<ll>v(n+1,0),v1(n+1);
        for(ll i=n-k+1; i<=n; i++)cin>>v[i];
         if(n==1 || k==1)cout<<"YES"<<endl;
         else {
             for(ll i=n; i>=n-k+2; i--)v1[i]=(v[i]-v[i-1]);
            bool f=true;
            for(ll i=n-k+2; i<=n; i++ ){
                if(i+1<=n && v1[i+1]<v1[i]){
                    f=false; break;
                }
            }
            if(!f)cout<<"NO"<<endl;
            else{
                for(ll i=n-k+1; i>1; i--){
                    v1[i]=v1[i+1];
                    v[i-1]=v[i]-v1[i];
                }
                v1[1]=v[1];
                bool ck=false;
                for(ll i=1; i<=n;i++){
                    if(i+1<=n && v1[i+1]<v1[i]){
                        ck=true; break;
                    }
                }
                if(!ck)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
         }
    }

      return 0;
}