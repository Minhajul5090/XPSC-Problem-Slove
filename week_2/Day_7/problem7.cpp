#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n,0),v1(n,0) ;
        for(int& i: v) cin>>i;
        string s;
          cin>>s;
            vector< pair<int , int> > p(n);
    for(int i=0;i<n;i++){
    p[i].first=s[i]-'0';
    p[i].second=v[i];

     }
      sort(p.begin(),p.end());
       int l=1;
     for(auto i:p){
    v1[i.second-1]=l;l++;  
   }
 
    for(int &i:v) cout<<v1[i-1]<<" ";
     cout<<endl;
    }

      return 0;
}