#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;   cin>>n;
        int a[n];
        for(int i=0; i<n; i++)cin>>a[i];
        set<int>s;
        for(int i=n-1; i>=0; i--){
            if(s.insert(a[i]).second);
            else break;
        }
        cout<<n-s.size()<<endl;
    }

      return 0;
}