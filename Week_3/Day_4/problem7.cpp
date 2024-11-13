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
        string s;  cin>>s;
        int B=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B'){
                i+=(k-1);B++;
            }
        }
      
        cout<<B<<endl;
    } 

      return 0;
}