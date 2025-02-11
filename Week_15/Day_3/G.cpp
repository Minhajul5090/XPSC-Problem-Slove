#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
     string s,s1;   cin>>s>>s1;
     if(s.size()!=s1.size())cout<<"NO";
     else{
        bool k=0;
          for(int i=0; i<s.size(); i++){
            if((s[i]=='a'||s[i]=='u'||s[i]=='e'||s[i]=='i'||s[i]=='o')&&
            (s1[i]!='a'&&s1[i]!='u'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o')){
                k=1; break;
            }
            if((s1[i]=='a'||s1[i]=='u'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o')&&
            (s[i]!='a'&&s[i]!='u'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o')){
                k=1; break;
            }
          }
          if(k)cout<<"NO";
          else cout<<"YES";
     }

      return 0;
}