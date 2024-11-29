#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        string s;   cin>>s;
        int n=s.size();
        string a=")(",c="))",d="((";
        bool f=false;
        
        if(s=="()"){
            cout<<"NO"<<endl;
        // else if(s=="((" || s=="))")cout<<"YES"<<endl<<"()()"<<endl;
        // else cout<<"YES"<<endl<<"(())"<<endl;
        continue;

        
        }
        int z=0,w=0;
        for(int i=0; i<n; i++){
            string x=s.substr(i,2);
            if(x==a){z=1; break;}
            if(x==c|| x==d){w=1; break;}
        }
        if(z==1){
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)cout<<"(";
            for(int i=n; i<2*n; i++)cout<<")";
            cout<<endl;
        }
        if(w==1){
             cout<<"YES"<<endl;
            for(int i=0; i<n; i++)cout<<"()";
            cout<<endl;
        }
    }

      return 0;
}