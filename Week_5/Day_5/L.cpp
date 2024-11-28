#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
     int t;
     cin>>t;
 
     while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll s=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
 
        }
        for(int i=0; i<n-2; i++)s+=a[i];
        cout<<a[n-1]-a[n-2]+s<<endl;
     }
     return 0;
}