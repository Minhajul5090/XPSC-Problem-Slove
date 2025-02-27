#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n,m,k;   cin>>n>>m>>k;
        multiset<ll>s1,s2;
        while(n--){ll x; cin>>x; s1.insert(x);}
        while(m--){ll x; cin>>x; s2.insert(x);}
        if(*s1.begin()<*(prev(s2.end()))){
            ll x=*s1.begin(),y=*(prev(s2.end()));
            s1.erase(s1.begin());s2.erase(--s2.end());
            s1.insert(y); s2.insert(x);
        }
        if(k>=2 && *s2.begin()<*(--s1.end())){
            ll x=*s2.begin(),y=*(--s1.end());
            s1.erase(--s1.end());s2.erase(s2.begin());
            s2.insert(y); s1.insert(x);
        }
        if(k>2 && k%2){
            ll x=*s1.begin(),y=*(--s2.end());
            s1.erase(s1.begin());s2.erase(--s2.end());
            s1.insert(y); s2.insert(x);
        }  
        ll ans=0;
        for(auto i:s1)ans+=i;
        cout<<ans<<"\n";                                            
    }

      return 0;
}