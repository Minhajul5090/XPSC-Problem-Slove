#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n),a,b;
        for(int i=0; i<n; i++)cin>>v[i];
         int j=-1;
         int y=INT_MIN;
        for(int i=0; i<n; i++){
          if(y<=v[i]){
            a.push_back(1);
            y=v[i];
          }
          else {
            if(v[i]<=v[0]){j=i;break;}
            else a.push_back(0);
          }
        }
        if(j!=-1){
            int x=INT_MIN;
            for(int i=j; i<n; i++){
                if(v[i]<=v[0] && x<=v[i]){
                    a.push_back(1);
                      x=v[i];
                }
                else a.push_back(0);
            }
        }
        for(auto i:a)cout<<i;
        cout<<endl;
    }

      return 0;
}