#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,k,i,x;
    cin>>n>>k;
    vector<int>v;
    for(i=1;i<=n; i++){
        v.push_back(i);
    }
    x=v.size()-k;
    if(k!=0){
        cout<<v[0]<<" ";

     for(i=x;i<v.size(); i++){
        cout<<v[i]<<" ";;
    }
   reverse(v.begin()+1,v.end()-k);
   for(i=1; i<x; i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
}
else{
     reverse(v.begin(),v.end());
     for(auto u:v)cout<<u<<" ";
     cout<<endl;
}
}
return 0;
}