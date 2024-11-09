#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        string s;   cin>>s;
        int a;
        set<int>st;
        for(int i=0; i<m; i++){
            cin>>a;
            st.insert(a);
            }
        string s1;  cin>>s1;
      
        sort(s1.begin(),s1.end());
        int j=0;
       for(auto i:st){
        s[i-1]=s1[j];
        j++;
       }
        cout<<s<<endl;
    }

      return 0;
}