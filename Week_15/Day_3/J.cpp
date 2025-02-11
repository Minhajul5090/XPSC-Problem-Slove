#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        char s;int n,i;
    cin>>s>>n;

   for(i=1; i<=8; i++){
    if(n!=i){
        cout<<s<<i<<endl;
    }
   }
    for(i=97; i<=104; i++){
    if(s!=char(i)){
        cout<<char(i)<<n<<endl;
    }
   }
    }

      return 0;
}