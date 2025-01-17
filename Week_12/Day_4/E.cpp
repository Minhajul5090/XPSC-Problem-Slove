#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
       vector<int> a(3001,0);
        for(int i=2; i<=3000; i++){
          if(a[i]==0){
            for(int j=i; j<=3000; j+=i)a[j]++;
          }
        }
          int n;   cin>>n;
          int c=0;
          for(int i=2; i<=n; i++){
            if(a[i]==2)c++;
          }
        cout<<c;

      return 0;
}