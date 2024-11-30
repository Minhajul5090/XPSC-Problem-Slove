#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,m;   cin>>n>>m;
        if(n>m)cout<<"NO"<<endl;
        else{
            int x=m%n;
            int y=m/n;
            if(n%2!=0){
            cout<<"YES"<<endl;
            for(int i=1; i<n; i++)cout<<y<<" ";
            if(x==0)cout<<y<<endl;
            else{
                int a=m-(y*(n-1));
                cout<<a<<endl;

            }
            }
            else{
                int a=m-(y*n),f=0;
                if(a%2!=0)cout<<"NO"<<endl;
                else{
                    int z=m-(y*(n-2));
                     cout<<"YES"<<endl;
                   for(int i=1; i<n-1; i++)cout<<y<<" ";
                   cout<<z/2<<" "<<z/2<<endl;
                }
            }

        }
    }

      return 0;
}