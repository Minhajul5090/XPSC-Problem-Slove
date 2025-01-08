#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,k;   cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        int c=0,j=1;
        for(int i=0; i<n; i++){
            if(v[i]==j){c++;j++;}
        }
        n-=c;
        if(n%k==0)cout<<n/k<<"\n";
        else cout<<(n/k)+1<<"\n";
    }

      return 0;
}