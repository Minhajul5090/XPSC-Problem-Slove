#include<bits/stdc++.h>
using namespace std;

int main(){
int t;    cin>>t;

while(t--){
    int n,x;
    cin>>n>>x;
    int a[n],i,k;
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    int c=a[0]-0;
    k=x-a[n-1];
    for(i=0; i<n-1; i++){
        int ans=a[i+1]-a[i];
        if(ans>c) c=ans;
    }
    if(k*2>c) cout<<k*2<<endl;
    else cout<<c<<endl;
}
return 0;
}