#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

bool ok(vector<int> v,int n, int k){
    multiset<int>s;
    for(auto i:v)s.insert(i);

    for(int i=1; i<=k;i++){
        if(s.empty())return false;
        int r=k-i+1;
        auto it=s.upper_bound(r);
        if(it==s.begin())return false;
        it--;
        s.erase(it);

        if(!s.empty()){
            auto x=s.begin();
            ll z=*x;
            s.erase(x);
            z+=r;
            s.insert(z);
        }
    }
    return true;
}
int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;    cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        sort(v.begin(),v.end());

        int low=0,high=n,mid,k;
        while(low<=high){
            mid=(low+high)/2;
            if(ok(v,n,mid)){
               k=mid;
               low=mid+1;
            }
            else high=mid-1;
        }
        cout<<k<<"\n";
    }

      return 0;
}