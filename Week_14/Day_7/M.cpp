#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n;    cin>>n;
    vector<int>a(n),b(n);
    for(auto &i : a)cin>>i;
    for(auto &i : b)cin>>i;
    deque<int>q;
    for(int i=0; i<n; i++){
        int x=b[i]-a[i];
        q.push_back(x);
    }
    sort(q.begin(),q.end());
    ll ans=0;
    while(!q.empty()){
        int x=q.front();
        q.pop_front();
        auto it=lower_bound(q.begin(),q.end(),-x);
        ans+=(it-q.begin());
    }
    cout<<ans;

      return 0;
}