#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,a,b;
        cin>>n;
        vector<int>v;
        int x=0,y=INT_MAX;
        for(int i=1; i<=n; i++){
            cin>>a>>b;
            if(a==1 && b>x) x=b;
            if(a==2 && b<y) y=b;
            if(a==3) v.push_back(b);
        }
        int c=0;
        for(int i=0; i<v.size(); i++){
            if(v[i]<=y && v[i]>=x) c++;
        }
        if(x>y) cout<<0<<endl;
        else cout<<abs((y-x)+1-c)<<endl;
    }

      return 0;
}