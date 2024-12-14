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
    vector<int> ans(n+1, 0);
    int m=0, om=0;
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        if(s[i]==s[j]) m++;
        else om++;
    }
    if(n%2)
    {
        while(1)
        {
            ans[om] = 1; ans[om+1] = 1; om+=2;
            if(m==0) break; m--;
        }
    }
    else{
        while(1)
        {
            ans[om] = 1; om+=2;
            if(m==0) break; m--;
        }
    }
    for(auto i:ans) cout<<i;
    cout<<'\n';
    }

      return 0;
}