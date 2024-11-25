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
        int c=0;
        vector<int>v;
        for(int i=1; i<=n; i++){
            int x;   cin>>x;
            if(x==0)c++;
            v.push_back(x);
        }
        int a=n-c;
        if(a+1>=c)cout<<0<<endl;
        else {
              int mx=*max_element(v.begin(),v.end());
              if(mx==1)cout<<2<<endl;
              else cout<<1<<endl;
        }
    }

      return 0;
}