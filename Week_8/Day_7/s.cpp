#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;              cin>>n;
 
        map<char,ll>f;
        map<char,ll>s;
        map<string,ll>o;
        vector<string>a(n);
        for(int i=0;i<n; i++){
            cin>>a[i];
            f[a[i][0]]++;
            s[a[i][1]]++;
            o[a[i]]++;
        }
 
        ll ans=0;
 
        for (int i=0; i<n; i++){
            ll x=max((ll)0,f[a[i][0]]-o[a[i]]);
            ans+=x;
            x=max((ll)0,s[a[i][1]]-o[a[i]]);
            ans+=x;
            if(f[a[i][0]]>0)f[a[i][0]]--;
            if(s[a[i][1]]>0)s[a[i][1]]--;
            if(o[a[i]]>0)o[a[i]]--;
        }
 
        cout<<ans<<endl;
    }

      return 0;
}
