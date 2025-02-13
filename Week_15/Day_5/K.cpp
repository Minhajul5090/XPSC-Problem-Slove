#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        string s;   cin>>s;
        int ans=INT_MAX;
        for(char ch='a'; ch<='z'; ch++){
            int mx=0,c=0,cur=0;
            for(int i=0; i<s.size(); i++){
                if(s[i]==ch)c=0;
                else c++;
                mx=max(c,mx);
            }
           while(mx>0){cur++; mx/=2;}
           ans=min(ans,cur);
        }
        cout<<ans<<"\n";
    }

      return 0;
}