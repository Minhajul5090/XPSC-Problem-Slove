#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
         ll n;   cin>>n;
         vector<ll>v,v1;
         for(int i=1; i<=n; i++){
            ll x;   cin>>x;
            if(x%2==0)v.push_back(x);
            else v1.push_back(x);
         }
         if(v.size()==n || v1.size()==n)cout<<0<<endl;
        else{
            ll mx=*max_element(v1.begin(),v1.end());
            sort(v.begin(),v.end());
            if(mx<v[0])cout<<v.size()+1<<endl;
            else{
                mx+=v[0];
                int f=0;
                for(int i=1; i<v.size(); i++){
                    if(mx<v[i]){f=1;break;}
                    else mx+=v[i];
                }
                if(f==1)cout<<v.size()+1<<endl;
                else cout<<v.size()<<endl;
            }
            }
    }

      return 0;
}