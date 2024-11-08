#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n; char c;
        cin>>n>>c;
        string s;   cin>>s;
        vector<int>v;
        int cnt=0;
       for(int i=0; i<n; i++){
         if(s[i]!=c && cnt==0)continue;
        else if(s[i]!='g')cnt++;
        else {
            v.push_back(cnt); cnt=0; 
        }
       }
      // for(auto i:v)cout<<i<<" ";
       for(int i=0; i<n; i++){
        if(s[i]!=c && cnt==0)continue;
       else if(s[i]!='g')cnt++;
        else {
            v.push_back(cnt); cnt=0;
        }
       }
      cout<<*max_element(v.begin(),v.end())<<endl;
    }

      return 0;
}