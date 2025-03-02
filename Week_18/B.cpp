#include<bits/stdc++.h>
using namespace std;

int main(){
int t;     cin>>t;

while(t--){
    int n, k;
    cin>>n>>k;
    long long int sum=(n*(n+1))/2;
    int a=(n-k);
    long long b=(a*(a+1))/2;
    int c=sum-b;
    if(c%2==0)cout<<"YES"<<endl;
    else  cout<<"NO"<<endl;
}
return 0;
}