#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,i;
    cin>>n;
   int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    int x=0;
    for(i=0; i<n; i++){
        x^=a[i];
    }
     for(i=0;i<n;i++){
        a[i]=a[i]^x;
     }
     int y=0;
     for(i=0; i<n; i++){
        y^=a[i];
    }
    if(y==0) cout<<x<<endl;
    else cout<<-1<<endl;
}
return 0;
}
