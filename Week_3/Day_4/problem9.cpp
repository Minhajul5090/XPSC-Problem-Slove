#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n;   cin>>n;
        ll a[n];
        ll sum=0,s=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]>=0)s++;
            if(a[i]<0)sum+=(-a[i]);
            else sum+=a[i];
        }
        int l=0,r=n-1;
        for(int i=0; i<n; i++){
            if(a[i]<0){l=i; break;}
        }
        for(int i=n-1; i>=0; i--){
            if(a[i]<0){r=i; break;}
        }
        ll c=1,ss=0;
        for(int i=l+1; i<=r; i++){
            if(a[i]>=0){
               ss+=a[i];
            }
            else if(a[i]<0 && ss!=0){
                c++; ss=0;
            }
        }
       
        if(s==n)cout<<sum<<" "<<0<<endl;
        else cout<<sum<<" "<<c<<endl;
       
        
    }

      return 0;
}