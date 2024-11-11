#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
       int n; cin>>n;
       string s; cin>>s;
       int l=0,r=n-1;
       while(l<r){
        if((s[l]=='0'&&s[r]=='1')||(s[l]=='1'&&s[r]=='0')){
            l++;r--;
        }
        else break;
       }
       if(l>r)cout<<0<<endl;
       else cout<<r-l+1<<endl;
    }

      return 0;
}