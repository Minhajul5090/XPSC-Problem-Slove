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
        vector<int>a(n),b(n);
        pair<int,int>p[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            p[i].first=a[i];
    
        }
         for(int i=0;i<n;i++){
            cin>>b[i];
            p[i].second=b[i];
    
        }
        sort(p,p+n);
        for(int i=0;i<n;i++){
            cout<<p[i].first<<" ";
        }
        cout<<"\n";
        for(int i=0;i<n;i++){
            cout<<p[i].second<<" ";
        }
        cout<<"\n";
    }

      return 0;
}