#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    while(t--){
            int n; cin>>n;
            string s,s1;
           cin>>s>>s1;
           int a=0, b=0;
           for(int i=0; i<n; i++){
            if(s[i]=='1'&&s[i]!=s1[i])a++;
                if(s[i]=='0'&& s[i]!=s1[i])b++;
           }
           if(a>b) cout<<a<<endl;
           else if(b>a)cout<<b<<endl;
           else if(a==b) cout<<a<<endl;
           else cout<<0<<endl;
    }
    return 0;
}