#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,k;  cin>>n>>k;
        vector<int>v,v1;
        set<int>s;
        for(int i=0;i<n; i++){
           int x; cin>>x;
           v.push_back(x);
            s.insert(x);
        }
        int x;
        for(int i=0; i<=n; i++){
             if(!s.count(i))x=i;
        }
        int m=k%(n+1);
        // for(int i=1; i<=m; i++){
        //     v.insert(v.begin(),x);
        //     x=v.back();
        //     v.pop_back();
        // }
       if(m==0){
        for(int i:v)cout<<i<<" ";
         cout<<endl;
         continue;
       }
       if(m==1){
        cout<<x<<" ";
        for(int i=0; i<n-1; i++)cout<<v[i]<<" ";
        cout<<endl;
        continue;
       }
       int i=n-1;
       int y=m-1;
       while(y--){
         v1.push_back(v[i]);
         i--;
       }
       reverse(v1.begin(), v1.end());
       v1.push_back(x);
       i=0;
       while(v1.size()<n){v1.push_back(v[i]); i++;}
        for(int it:v1)cout<<it<<" ";
        cout<<endl;
    }

      return 0;
}