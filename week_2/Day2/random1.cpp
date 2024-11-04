#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   
        int n,x;   cin>>n>>x;
        vector<int>v(n),v1;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]!=x)v1.push_back(v[i]);
        }
        //if(v1.empty())cout<<endl;
        for( int i:v1)cout<<i<<" ";

      return 0;
}