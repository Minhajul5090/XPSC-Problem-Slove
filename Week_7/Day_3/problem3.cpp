#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n, k;  cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        int b=30;
        vector<int>bit(b+1);
        for(int i=0; i<n; i++){
            for(int j=b;j>=0; j--){
                if((v[i]>>j)&1)bit[j]++;
            }
        }
        ll ans=0;
        for(int i=b; i>=0; i--){
            if(bit[i]==n)ans+=(1ll<<i);
            else{
                int need=n-bit[i];
                if(k>=need){
                    ans+=(1ll<<i);
                    k-=need;
                }
            }
        }
        cout<<ans<<endl;
    }

      return 0;
}