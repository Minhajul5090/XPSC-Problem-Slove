#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==1&& k==1)cout<<1<<endl<<1<<endl;
        else if(n==k || k==1)cout<<-1<<endl;
        else if(k%2==0)cout<<3<<endl<<1<<" "<<k<<" "<<k+1<<endl;
        else cout<<3<<endl<<1<<" "<<k-1<<" "<<k+2<<endl;
    }

      return 0;
}