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
        char a[n][n]={0};
        for(int i=0;i<n; i++){
            string s;  cin>>s;
           for(int j=0; j<n; j++)a[i][j]=s[j];
        }
         for(int i=0;i<n; i+=k){
            for(int j=0; j<n; j+=k)cout<<a[i][j];
            cout<<"\n";
        }
    }

      return 0;
}