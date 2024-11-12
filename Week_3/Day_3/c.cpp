#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n ;   cin>>n;
        set<int>s;
       while(n--){
        int x;  cin>>x;
        s.insert(x);
       }
       if((s.size()==2 &&*s.begin()==0) || s.size()==1)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }

      return 0;
}