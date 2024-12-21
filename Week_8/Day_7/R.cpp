#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;
    cin>>n;
    string s;
    cin>>s;
    int x = 0, y=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='N') x++;
        else if(s[i]=='S') x--;
        else if(s[i]=='E') y++;
        else y--;
    }
    if(x%2!=0 || y%2!=0)
    {
        cout<<"NO\n";
        continue;;
    }
 
    if(x==0&&y==0&&n==2)
    {
        cout<<"NO\n";
        continue;;
    }
 
    vector<char> ans(n, 'R');
 
    if( x==0 && y==0 && n>2 )
    {
        ans[0] = 'H';
        char all;
        if(s[0]=='N')
        {
            all = 'S';
        }
        else if(s[0]=='S')
        {
            all = 'N';
        }
        else if(s[0]=='W')
        {
            all = 'E';
        }
        else all = 'W';
 
        int in = 1;
        while(s[in]!=all && in<n) in++;
        ans[in] = 'H';
    }
    else{
        
        for(int i=0;i<n; i++)
        {
            if(s[i]=='S' && x<0)
            {
                ans[i] = 'H';
                x+=2;
            }
            else if(s[i]=='N' && x>0){
                ans[i] = 'H';
                x-=2;
            }
            else if(s[i]=='E' && y>0){
                ans[i] = 'H';
                y-=2;
            }
            else if(s[i]=='W' && y<0){
                ans[i] = 'H';
                y+=2;
            }
        }
    }
 
    for(auto i:ans) cout<<i;
    cout<<'\n';
    }

      return 0;
}