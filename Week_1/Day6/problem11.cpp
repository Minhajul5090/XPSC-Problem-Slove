#include<bits/stdc++.h>
using namespace std;

int main ()
{

    int t; cin>>t;
    while (t--){
            string s;
    cin>>s;
    char c;
    int f=0,v=1;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]){
             f=i+1;
           break;
        }
        
    }
    if(s[f]!='x'){
        s.insert(s.begin()+f,'x');
        cout<<s<<endl;
    }
    else {
         s.insert(s.begin()+f,'a');
        cout<<s<<endl;
    }
    }
    return 0;
}