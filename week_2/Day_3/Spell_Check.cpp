#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n; cin>>n;
        string s;   cin>>s;
        if(n>5)cout<<"NO"<<endl;
        else{
            int T=0,i=0,m=0,u=0,r=0;
            for(int j=0; j<n; j++){
                if(s[j]=='T')T++;
                if(s[j]=='i')i++;
                 if(s[j]=='m')m++;
                  if(s[j]=='u')u++;
                   if(s[j]=='r')r++;
            }
            if(T==1&&i==1&&m==1&&u==1&&r==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        } 
    }

      return 0;
}