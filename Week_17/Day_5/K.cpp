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
        vector<pair<int,int>>p;
        for(int i=1; i<=n; i++){
            int x; cin>>x;
            p.push_back({x,i});
        }
        sort(p.rbegin(),p.rend());
        map<int,pair<int,int>>mp;
        int mn=INT_MAX,mx=INT_MIN;
        for(auto i:p){
            mn=min(mn,i.second);
            mx=max(mx,i.second);
            mp[i.first]={mn,mx};
        }
        for(int i=1; i<=k; i++){
            if(mp.find(i)==mp.end())cout<<0<<" ";
            else{
                cout<<(mp[i].second-mp[i].first+1)*2<<" ";

            }
        }
        cout<<"\n";
    }

      return 0;
}