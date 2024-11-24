#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

while(t--){
    int n,i;
    cin>>n;
    if(n%2!=0) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl<<"AAA";
        for(i=4; i<=n; i=i+2){
            cout<<"BAA";
        }
        cout<<endl;
    }
}
return 0;
}