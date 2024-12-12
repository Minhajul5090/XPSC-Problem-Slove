#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s>>s1;
    int a=0,b=0,c=0,d=0;
    for(auto i:s){
        if(i=='+'){
            a++;
        }
    }
    for(auto i:s1){
        if(i=='+'){
            b++;
        }
        if(i=='?'){
            d++;
        }
    }
    int x=(1<<d);
    for(int i=0;i<x;i++){
        if(__builtin_popcount(i)+b==a){
            c++;
        }
    }
    cout<<fixed<<setprecision(12);
    cout<<c/(double)x<<endl;
}
