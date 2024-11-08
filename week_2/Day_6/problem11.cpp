#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
       int n,m,q;    cin>>n>>m>>q;
       set<int>s;
       while(m--){
        int x;  cin>>x;
        s.insert(x);
       }
       while(q--){
        int d;  cin>>d;
        auto it=s.upper_bound(d);
        int x ,y;
        if(d>=*s.rbegin()){
             x=*(s.rbegin());
             cout<<n-x<<endl; 
        }
       else if(it==s.begin()){
             y=*it;
            cout<<y-1<<endl;
           
        }
        else {
            y=*it; x=*(--it);
            cout<<(y-x)/2<<endl;
        }
       
       }   
    }

      return 0;
}