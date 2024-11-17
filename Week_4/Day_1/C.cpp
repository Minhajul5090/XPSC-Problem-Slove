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
        string s;   cin>>s;
        int c=0,a=0;
        if(s[s.size()-1]=='1')s.push_back('0');
        for(int i=0; i<s.size();i++){
            if(s[i]=='1')c++;
            else if(s[i]=='0'&& c>0){
                a++; c=0;
            }
        }
       if(s.size()>n) s.pop_back();
        c=0; int b=0;
        if(s[s.size()-1]=='0')s.push_back('1');
        for(int i=0; i<s.size();i++){
            if(s[i]=='0')c++;
            else if(s[i]=='1'&& c>0){
                b++; c=0;
            }
        }
        cout<<min(a,b)<<endl;
    }

      return 0;
}