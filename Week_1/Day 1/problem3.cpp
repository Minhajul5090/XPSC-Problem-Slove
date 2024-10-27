#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    set<pair<string,string>>st;
    
    while(n--){
        string s,s1;
        cin>>s>>s1;
        st.insert({s,s1});
    }
   cout<<st.size();
      return 0;
}