#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
    char ch[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>ch[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=n-2, k=n-1; j>=0; j--){
            if(ch[k][i]=='*'||ch[k][i]=='o'){
                k--;
                
            }
            else if(ch[k][i]=='.'&&ch[j][i]=='*'){
                swap(ch[k][i], ch[j][i]);
                k--;
            }
            else if(ch[j][i]=='o'){
                k = j;
                k--;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           cout<<ch[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    }

      return 0;
}