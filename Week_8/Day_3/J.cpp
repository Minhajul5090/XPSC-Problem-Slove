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
        int a=0,b=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1')a++;
            else b++;
        }
       
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                if(b<=0)break;
                else b--;
            }
            else{
                if(a<=0)break;
                else a--;
            }
        }
        cout<<a+b<<endl;
    }

      return 0;
}