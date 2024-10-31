#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        string s,s1=" ";   cin>>s;
        reverse(s.begin(),s.end());
       int B=0,b=0;
       for(int i=0; i<s.size(); i++){
        if(s[i]=='b')b++;
        else if(s[i]=='B')B++;
        else if(s[i]>='a'&& s[i]<='z' && b>0)b--;
        else if(s[i]>='A' && s[i]<='Z' && B>0)B--;
        else s1+=s[i];
        
    }
         reverse(s1.begin(),s1.end());
         cout<<s1<<endl;
    }
      return 0;
}