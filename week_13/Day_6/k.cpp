#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,k;    cin>>n>>k;
          vector<int>v(n+1,0);
          int mx=n, mn=1;
          
          for(int i=1; i<=k; i++){
            for(int j=i; j<=n; j+=k){
                if(i%2==0){v[j]=mx;mx--;}
                else {v[j]=mn; mn++;}
            }
          }
          for(auto i:v)if(i!=0)cout<<i<<" ";
          cout<<"\n";
    }

      return 0;
}