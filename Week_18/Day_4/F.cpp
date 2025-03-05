#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
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