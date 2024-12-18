#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        char a[8][8];
        int c=0,d=0;
        for(int i=0; i<8; i++){
            int r=0,b=0;
            for(int j=0; j<8; j++){
                cin>>a[i][j];
                if(a[i][j]=='R')r++;
                if(a[i][j]=='B')b++;
                if(r==8)c=1;
                if(b==8)d=1;
            }
        }
  if(c==1)cout<<"R"<<endl;
  else cout<<"B"<<endl;
    }

      return 0;
}