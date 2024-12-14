#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int a;  cin>>a;
        vector<int>v;
        for(int i=1;i<=a;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int ar[100]={};
        ll ans=0;
        for(auto u:v){
            ans+=ar[__lg(u)]++;
        }
        cout<<ans<<endl;
    }

      return 0;
}