#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;  cin>>n;
        int a[n];
        vector<int>v;
        for(int i=0; i<n;i++)cin>>a[i];
        for(int i=0; i<n; i++){
            int x; string s;
            cin>>x>>s;
            for(int j=x-1; j>=0; j--){
                if(s[j]=='U'){
                    a[i]--;
                    if(a[i]<0)a[i]=9;
                }
                 if(s[j]=='D') {
                   a[i]++;
                    if(a[i]>9)a[i]=0;
                }
                
            }
            //cout<<z;
            v.push_back(a[i]);
        }
        for(int i:v)cout<<i<<" ";
        cout<<endl;
    }

      return 0;
}