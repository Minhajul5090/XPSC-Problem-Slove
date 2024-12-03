#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;   cin>>n;
        int a[n];
        for(int i=0; i<n; i++)cin>>a[i];
        int f=0,c=0;
        for(int i=n-1; i>0; i--){
            if(a[i]<a[i-1]){f=i-1; c=1; break;}
        }
        if(c==0)cout<<"YES"<<endl;
        else{
            int v=0;
            for(int i=0; i<f; i++){
                if(a[i]>a[i+1]){v=1; break;}

            }
            if(v==0 && a[n-1]<=a[0])cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

      return 0;
}