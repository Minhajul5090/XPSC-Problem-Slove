#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;    cin>>t;
    while(t--){
        int n;  cin>>n;
        string s;
        cin>>s;
        int f=0,l=0;
        for(int i=0; i<n; i++){
            if(s[i]=='B'){f=i+1;break;}
        }
        for(int i=n-1; i>=0; i--){
            if(s[i]=='B'){l=i+1;break;}
        }
       
        if(f==0 && l==0)cout<<0<<endl;
        else cout<<l-f+1<<endl;
    }
      return 0;
}