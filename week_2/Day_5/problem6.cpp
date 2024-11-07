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
       vector<int>v(n);
       for(int i=0; i<n; i++){
       cin>>v[i];
       } 
       int l=1,r=n,i=0,j=n-1,f=0;
       while(i<=j){
        if(v[i]==l){
            l++; i++;
         }
        else  if(v[j]==l){
            l++; j--;
         }
         else if(v[i]==r){
            r--; i++;
         }
         else if(v[j]==r){
            r--; j--;
         }
         else break;

       }
        if(i>j) cout<<-1<<endl;
        else cout<<i+1<<" "<<j+1<<endl;
    }


      return 0;
}