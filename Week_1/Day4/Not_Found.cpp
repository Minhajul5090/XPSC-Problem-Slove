#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;   cin>>s;
    sort(s.begin(),s.end());
    char cc;
    int a=0;
     for(char ch='a'; ch<='z'; ch++){
        if(s.find(ch)==string::npos){
            cc=ch; a=1; break;
        }
     }
     if(a==0)cout<<"None";
     else cout<<cc;
      return 0;
}