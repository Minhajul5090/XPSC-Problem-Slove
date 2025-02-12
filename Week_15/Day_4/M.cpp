#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,k;    cin>>n>>k;
        string s;  cin>>s;
        int c=0;
        for(auto i:s){if(i=='B')c++;}
        if(c==k){cout<<0<<"\n";}
        else if(c>k){
            c-=k;int z=0;
            for(int i=0; i<n; i++){
                if(s[i]=='B')z++;
                if(z==c){cout<<1<<" "<<"\n"<<i+1<<" "<<"A\n";break;}
            }
        }
        else{
            k-=c;
            int z=0;
            for(int i=0; i<n; i++){
                if(s[i]=='A')z++;
                if(z==k){cout<<1<<" "<<"\n"<<i+1<<" "<<"B\n";break;}
            }
        }
    }

      return 0;
}