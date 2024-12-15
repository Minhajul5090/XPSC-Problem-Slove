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
        int c=0;
        int z=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0')z++;
            else c++;
        }
        if(z<c)c=z;
        if(c%2)cout<<"Zlatan"<<endl;
        else cout<<"Ramos"<<endl;
    }

      return 0;
}