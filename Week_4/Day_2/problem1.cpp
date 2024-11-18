// #include<bits/stdc++.h>
// #define CODE ios::sync_with_stdio(false); cin.tie(0);
// #define ll long long
// using namespace std;

// int main()
// {
//     CODE
//     ll n,k; cin>>n>>k;
//     ll a[n];
//     for(int i=0; i<n; i++)cin>>a[i];
//     ll s=0,l=0,r=0,ans=0;
//     while(r<n){
//          s+=a[r];
//          if(s<=k)ans=max(ans,r-l+1);
//          else {
//             s-=a[l];
//             l++;
//          }
//          r++;
//     }
//     cout<<ans<<endl;

//       return 0;
// }
#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    ll n,k; cin>>n>>k;
    ll a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    ll s=0,c=0;
    for(int i=0;i<n; i++){
         s+=a[i];
         if(s<=k)c++;
         else s-=a[i-c];
    }
    cout<<c<<endl;

      return 0;
}