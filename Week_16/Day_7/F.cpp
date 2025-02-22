#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n;          cin>>n;
    int ax,ay,bx,by,cx,cy;  cin>>ax>>ay>>bx>>by>>cx>>cy;
    
    if(bx>cx){
        swap(bx,cx);
    }
    if(by>cy){
        swap(by,cy);
    }
    if((ax>bx && ax<cx) || (ay>by && ay<cy)){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }

      return 0;
}