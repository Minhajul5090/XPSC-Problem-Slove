#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll n; cin>>n;
        priority_queue<ll>pq;
        ll sum=0;
        for(int i=0; i<n; i++){
            ll x;  cin>>x;
            if(x!=0)pq.push(x);
            else {
                if(!pq.empty()){
                    sum+=pq.top();
                    pq.pop();
                }
            }
        }
        cout<<sum<<endl;
    }

      return 0;
}