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
        int x;
        for(int i=0; i<n; i++){
          cin>>a[i];
        }
        x=a[0];
        for(int i=1; i<n;i++)x=x^a[i];
        vector<int>v;
        v.push_back(x);
        for(int i=0; i<n; i++)v.push_back(x^a[i]);
        cout<<*min_element(v.begin(),v.end())<<endl;
    }

      return 0;
}