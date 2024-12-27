#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;


int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int l,r;  cin>>l>>r;
       if(r%2==0 && r/2>=l)cout<<r/2<<" "<<r<<endl;
       else if((r-1)%2==0 && (r-1)/2>=l)cout<<(r-1)/2<<" "<<r-1<<endl;
       else cout<<-1<<" "<<-1<<endl;
    }

      return 0;
}