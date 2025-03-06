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
        vector<int>v(n+1);
        ll sum=0;
        for(int i=1; i<=n; i++){cin>>v[i]; sum+=v[i];}
        if(n==1 || n==2){cout<<-1<<"\n"; continue;}
        sort(v.begin(),v.end());
        ll x=v[(n/2)+1];
        ll a=x*(n*2);
        ll b=a-sum;
        if(b<0)b=-1;
        cout<<b+1<<"\n";

    }

      return 0;
}