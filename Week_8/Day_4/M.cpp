#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,k;  cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        int c=0;
        for(int i=0; i<n; i++){
            if(v[i]%k !=(i+1)%k)c++;
        }
      
        if(c==0)cout<<0<<endl;
         else if(c==2)cout<<1<<endl;
         else cout<<-1<<endl;
    }

      return 0;
}