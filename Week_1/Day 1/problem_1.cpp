#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n; cin>>n;
    vector<int>v(n),v1;
    for(int i=0; i<n; i++)cin>>v[i];
    
     while(!v.empty()){
        if(v.front()>v.back()){
          v1.push_back(v.front());
          v.erase(v.begin());
        }
        else {
          v1.push_back(v.back());
          v.pop_back();
        }
     }
     int d=0,s=0;
     for(int i=0; i<n;i++){
        if(i%2!=0)d+=v1[i];
        else s+=v1[i];
     }
     cout<<s<<" "<<d;
     
  

      return 0;
}