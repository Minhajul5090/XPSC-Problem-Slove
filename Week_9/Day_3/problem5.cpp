#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const ll N=1e9+7;

ll fact(int n){
    if(n==0)return 1;
    return n*fact(n-1)%N;
}
int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;   cin>>n;
        cout<<fact(n)<<endl; 
    }

      return 0;
}