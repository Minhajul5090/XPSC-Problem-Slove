#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    set<string>s;
    int x=t;
    while(t--){
        string a;   cin>>a;
       if(s.insert(a).second)cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }

      return 0;
}