#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;   cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        int ans=INT_MAX;
        for(int i=1; i<n-1; i++){
            int x=max(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
            ans=min(ans,x);
        }
        int a=min(abs(v[0]-v[1]),abs(v[n-1]-v[n-2]));

        cout<<min(ans,a)<<endl;
    }

      return 0;
}