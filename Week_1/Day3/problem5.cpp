#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t; cin>>t;
   while(t--){
    int n;   cin>>n;
   set<string>s1,s2,s3;
   for(int i=1; i<=n; i++){
    string s;   cin>>s;
    s1.insert(s);
   }
 for(int i=1; i<=n; i++) {
     string s;  cin>>s; s2.insert(s);
 }
  for(int i=1; i<=n; i++) {
     string s;  cin>>s; s3.insert(s);
 }
 int a=0,b=0,c=0;
   for(auto i:s1){
    if(s2.find(i)!=s2.end()&& s3.find(i)!=s3.end()){
        a+=0;
    }
   else if(s2.find(i)!=s2.end()){
        a+=1;
    }
    else if(s3.find(i)!=s3.end()){
        a+=1;
    }
    else {a+=3;}
   }
   for(auto i:s2){
    if(s1.find(i)!=s1.end()&& s3.find(i)!=s3.end()){
        b+=0;
    }
   else if(s1.find(i)!=s1.end()){
        b+=1;
    }
    else if(s3.find(i)!=s3.end()){
        b+=1;
    }
    else {b+=3;}
   }
   for(auto i:s3){
    if(s2.find(i)!=s2.end()&& s1.find(i)!=s1.end()){
        c+=0;
    }
   else if(s2.find(i)!=s2.end()){
        c+=1;
    }
    else if(s1.find(i)!=s1.end()){
        c+=1;
    }
    else {c+=3;}
   }
   cout<<a<<" "<<b<<" "<<c<<endl;
   }

      return 0;
}