#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n;   cin>>n;
    vector<int>v(n),p(n);
    for(int i=0; i<n; i++)cin>>v[i];
    p[0]=v[0];
    for(int i=1; i<n; i++)p[i]=v[i]+p[i-1];
    int t;         cin>>t;
    while(t--){
        int x;  cin>>x;
        cout<<lower_bound(p.begin(),p.end(),x)-p.begin()+1<<endl;
    }

      return 0;
}