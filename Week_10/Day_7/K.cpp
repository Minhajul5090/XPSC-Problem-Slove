#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int i=1;
    while (true)
    {
     int n,q;    cin>>n>>q;
     if(n==0 && q==0)break;
     vector<int>v(n);
     for(int i=0; i<n;i++)cin>>v[i];
     sort(v.begin(),v.end());
     cout<<"CASE# "<<i<<":"<<endl;
     while(q--){
        int x ;  cin>>x;
        auto it=lower_bound(v.begin(),v.end(),x);
        if(*it==x)cout<<x<<" found at "<<it-v.begin()+1<<endl;
        else cout<<x<<" not found"<<endl;
     }
     i++;   
    }
    

      return 0;
}