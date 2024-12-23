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
        if(n==1)cout<<1<<endl;
        else if(n<=4)cout<<2<<endl;
        else if(n<=10)cout<<3<<endl;
        else{
            int x=10,c=3;
           while(true){
             x+=1;
             x=x*2;
            if(x<=n){
                c++;
                if(x>=n)break;
            }
            else {c++;break;}
             
           }
          cout<<c<<endl;
        }
    }

      return 0;
}