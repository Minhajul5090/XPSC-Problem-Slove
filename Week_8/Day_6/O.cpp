#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<ll>v(n),a;
        for(ll i=0; i<n; i++)cin>>v[i];
        int ans=0;
        bool f=false;
        for(ll i=n-2; i>=0; i--){
            while (v[i]>=v[i+1] && v[i]>0)
                {
                    v[i]/=2; ans++;
                   
                }
            if(v[i]>=v[i+1] && v[i]==0){f=true; break;}
            
        }
        if(f)cout<<-1<<endl;
        else cout<<ans<<endl;
    }

      return 0;
}