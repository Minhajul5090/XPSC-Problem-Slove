#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

   int a[220][220];
int slove(int i, int j,int n, int m){
    int sum=0;
    int x=i,y=j;
    while(x>=0 && y>=0){
        sum+=a[x][y];
        x--;y--;
    }
    x=i+1;y=j+1;
    while(x<n && y<m){
         sum+=a[x][y];
         x++; y++;
    }
    x=i-1;y=j+1;
    while(x>=0 && y<m){
        sum+=a[x][y];
        x--;y++;
    }
    x=i+1;y=j-1;
    while(x<n && y>=0){
        sum+=a[x][y];
        x++;y--;
    }
    return sum;
}
int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,m;   cin>>n>>m;
     
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int ab=slove(i,j,n,m);
                ans=max(ans,ab);  
            }
          
        }
        cout<<ans<<endl;
    }

      return 0;
}