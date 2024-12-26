#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int a, b;    cin>>a>>b;
        if(a<=4 && b>=4)cout<<2<<" "<<2<<endl;
       else if(a%2==0 && a-2>1) cout<<a-2<<" "<<2<<endl;
        else if(b%2==0 && b-2>1)cout<<b-2<<" "<<2<<endl;
        else if(a%2!=0 && b-a>1 && a-1>1)cout<<a-1<<" "<<2<<endl;
        else{
            bool f=false;
            for(int i=2; i*i<=a; i++){
                if((a)%i==0){
                  if((a-i)%i==0)  {
                    cout<<a-i<<" "<<i<<endl;
                    f=true; break;
                  }
                  else if((a-(a/i))%(a/i)==0){
                    cout<<a-a/i<<" "<<a/i<<endl;
                    f=true; break;
                  }
                }
            }
            if(!f)cout<<-1<<endl;
            
        }
    }

      return 0;
}