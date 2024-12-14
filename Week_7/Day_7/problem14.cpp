#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;  cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >>v[i];
    int ans=v[0];
    for(int j=1; j<n; j++)
    {
        ans&=v[j];
    }
    cout << ans<<endl;
    }

      return 0;
}