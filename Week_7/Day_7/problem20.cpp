#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
         int n;cin>>n;
    vector<int> v(n);
    vector<int> bit(32,0);
    for(auto &it:v){
        cin>>it;
        int vl=it;
        for(int i=0;i<32;i++)
        {
            if(vl&(1<<i))
            {
                bit[i]++;
            }
        }
    }
    set<int> ans;
    for(int i=0;i<n;i++)
    {
        int k=i+1;
        bool ok=true;
       for(int j=0;j<30;j++)
       {
        if(bit[j]%k)
        {
            ok=false;
        }
       }
       if(ok)
    {
        ans.insert(k);
    }
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    }

      return 0;
}