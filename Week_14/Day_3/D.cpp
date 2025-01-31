#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   
        int n,k,q;   cin>>n>>k>>q;
        vector<int>v(200005,0),valid(200005);
        while(n--){
            int l,r;   cin>>l>>r;
            v[l]++;
            v[r+1]--;
        }
        for(int i=1; i<v.size(); i++)v[i]=v[i]+v[i-1];
        for(int i=0; i<v.size(); i++){
            if(v[i]>=k)valid[i]=1;
            else valid[i]=0;
        }
        for(int i=1; i<valid.size(); i++)valid[i]=valid[i]+valid[i-1];
        while(q--){
            int l,r;   cin>>l>>r;
            cout<<valid[r]-valid[l-1]<<"\n";
        }

      return 0;
}