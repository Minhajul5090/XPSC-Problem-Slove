#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,k;   cin>>n>>k;
        map<int,int>mp;
        for(int i=1; i<=n; i++){
            int x;  cin>>x;
            mp[x]++;
        }
        vector<ll>v;
        for(auto val:mp ){
            if(val.second>=k)v.push_back(val.first);
        }
        if(v.size()==0){cout<<-1<<endl; continue;}
        vector<pair<ll,ll>>p;
        int l=v[0];
        v.push_back(v[v.size()-1]+2);
        for(int i=0; i<v.size()-1; i++){
            if((v[i+1]-v[i])!=1){
                p.push_back({v[i],l});
                l=v[i+1];
            }
        }
        ll mx=-1,r,l1;
        for(auto i:p){
            ll a=abs(i.first-i.second);
            if(a>mx){
                mx=a;
                l1=i.first;
                r=i.second;
            }
        }
        cout<<r<<" "<<l1<<endl;
    }

      return 0;
}
