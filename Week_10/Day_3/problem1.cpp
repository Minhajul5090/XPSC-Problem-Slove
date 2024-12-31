#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
unordered_set<int>s,s1;
 bool b_src(vector<int>& v, int n){
     int l=0,r=v.size()-1;
     while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]==n){s.insert(v[mid]) ;return true;}
        else if(v[mid]<n)l=mid+1;
        else r=mid-1;
     }
     s1.insert(n);
     return false;
}
int main()
{
    CODE
    int n,k;         cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    while(k--){
        int x;   cin>>x;
        if(s1.count(x))cout<<"NO"<<"\n";
        else if( s.count(x) || b_src(v,x))cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

      return 0;
}