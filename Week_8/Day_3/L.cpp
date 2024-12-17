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
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        bool f=false;
        for(int i=0; i<n; i++){
            int x=v[i];
            if(v[x-1]==i+1){f=true; break;}
        }
        if(f)cout<<2<<endl;
        else cout<<3<<endl;
    }

      return 0;
}