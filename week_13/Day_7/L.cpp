#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
int n,m; 
ll a[1001][1001];
ll col(int j){
     ll s=0;
     for(int i=0; i<n; i++)s+=a[i][j];

     return s;
}
ll row(int i){
     ll s=0;
     for(int j=0; j<m; j++)s+=a[i][j];

     return s;
}
int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
         cin>>n>>m;
        string s;   cin>>s;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];  
        }
        
        }
       
        int i=0,j=0;
       
        for(int index=0; index<n+m-2; index++){
            if(s[index]=='R'){
                ll c= col(j);
                a[i][j]=-c;
                j++;
            }
            else {
                ll r=row(i);
                a[i][j]=-r;
                i++;
            }
        }
        ll x=row(i);
        a[i][j]=-x;
        for(i=0; i<n; i++){
            for(j=0; j<m; j++)cout<<a[i][j]<<" ";
            cout<<"\n";
        }
    }

      return 0;
}