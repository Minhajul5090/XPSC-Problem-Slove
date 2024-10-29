#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    string s=to_string(n);
  if(s.size()<4){
    int x=4-s.size();
    string s1;
    s1.append(x,'0');
    
    cout<<s1+s;
  }
  else cout<<s;
      return 0;
}