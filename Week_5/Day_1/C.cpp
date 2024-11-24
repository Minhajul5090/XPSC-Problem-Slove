#include<bits/stdc++.h>
using namespace std;

int main(){
int t ;              cin>>t;

while(t--){
    int n;           cin>>n;

    string s,s1,s2;  cin>>s>>s1>>s2;
    int c=0;
    for(int i=0; i<n; i++){
        if(s[i]==s2[i]|| s1[i]==s2[i]){c++;}
    }
    if(c==n) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
return 0;
}