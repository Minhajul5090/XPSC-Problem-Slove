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
        string s,s1; cin>>s>>s1;
         int f=0;
         for(int i=0; i<n; i++){
            if((s[i]=='R'&&(s1[i]=='G'||s1[i]=='B'))
            || (s1[i]=='R'&&(s[i]=='G'||s[i]=='B'))){
                f=1; break;
            }
         }
         if(f==1)cout<<"NO"<<endl;
         else cout<<"YES"<<endl;
    }

      return 0;
}