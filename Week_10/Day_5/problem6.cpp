#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int b_src(vector<int>&v, int n){
    int l=0, r=v.size()-1,ans;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]<=n){
            ans=mid+1;
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;
}

int main()
{
    CODE
    int n;    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    sort(v.begin(),v.end());
    int q;   cin>>q;
    while(q--){
        int x;   cin>>x;
        if(x<v[0]){cout<<0<<endl; continue;}
        cout<<b_src(v,x)<<endl;

    }

      return 0;
}