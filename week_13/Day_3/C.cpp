#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,m;   cin>>n>>m;
        string s,s1;   cin>>s>>s1;
        int x=0,j=0;
        for(int i=0; i<m; i++){
           if(s[j]==s1[i]){
            x++;
            j++;
            if(j>=n) break;
           }
        }
        cout<<x<<"\n";
    }

      return 0;
}