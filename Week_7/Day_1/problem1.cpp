#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int n;   cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    bool f=false;
    for(int i=0; i<(1<<n); i++){
        int sum=0;
        for(int k=0; k<n; k++){
            if((i>>k)&1) sum+=v[k];
            else sum-=v[k];
        }
        if(!sum || !sum%360){f=true; break;}
    }
    if(f)cout<<"YES";
    else cout<<"NO";

      return 0;
}