#include<bits/stdc++.h>
using namespace std;

int main(){
int t;     cin>>t;

while(t--){
   int n,k;
   cin>>n>>k;
   int a[n];
   int c=0,s=0;
   for(int i=0; i<n; i++){
    cin>>a[i];

   if(a[i]>=k)s=s+a[i];
    if(a[i]==0 && s>0){
        s--;  c++;}
   }
   cout<<c<<endl;
}
return 0;
}