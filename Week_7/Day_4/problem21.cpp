#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll b,c,d;    cin>>b>>c>>d;
        ll a=0ll;
        for(ll k=0; k<64; k++){
            ll x=0ll,y=0ll,z=0ll;
            ll m= (1ll<<k);
            if((b>>k)&1) x=m;
            if((c>>k)&1) y=m;
            if((d>>k)&1) z=m;
           if((m|x)==(z+(m&y))) a=a|m;
        }
        if((a|b)==(d+(a&c))) cout<<a<<endl;
        else cout<<-1<<endl;
    }

      return 0;
}