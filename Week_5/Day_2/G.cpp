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
        string s,s1; cin>>s;
        if(s[0]<s[s.size()-1])cout<<s<<endl;
        else{
             int l=0,r=s.size()-1;
              while(l<r){
                if(s[r]<s[l]){
                 s1=s;
              reverse(s.begin(),s.end());
              s+=s1; break;
              }
              else if(s[r]==s[l]) {l++;r--;}
                else {
                    //reverse(s.begin(),s.end());
                    break;
                }
              }
              cout<<s<<endl;
        }
    }

      return 0;
}