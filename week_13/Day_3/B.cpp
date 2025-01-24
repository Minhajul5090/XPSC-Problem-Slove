#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,a,b;    cin>>n>>a>>b;
        int x=(n/2);
        set<int>v,v1;
        v.insert(a);
        v1.insert(b);
        for(int i=n; i>=1; i--){
            if(i>a && i!=b)v.insert(i);
            if(v.size()==x)break;
        }
         for(int i=1; i<=n; i++){
            if(i<b && v.find(i)==v.end())v1.insert(i);
            if(v1.size()==x)break;
        }
          if(v.size()<x || v1.size()<x)cout<<-1<<"\n";
        else{
            for(auto i:v)cout<<i<<" ";
            for(auto i:v1)cout<<i<<" ";
            cout<<"\n";
        }
      
    }

      return 0;
}