#include<bits/stdc++.h>
using namespace std ;

int main(){
      int t;      cin>>t;

      while(t--){

        int n,k;    cin>>n>>k;
        vector<char>v;
        for(int i=97;  i<=k+96;i++){
            v.push_back(char(i));
      }
  while(n--){
       for(int i=0;  i<v.size();i++){
            cout<<v[i];
      }
      }
      cout<<endl;
}
return 0;
}