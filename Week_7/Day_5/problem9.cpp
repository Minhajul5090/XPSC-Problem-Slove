#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;     cin >> n;
        
        int x = pow(2, static_cast<int>(log2(n)));

        int a = n - x;
        int b = x;

        cout <<a<<" "<<b<<endl;
    }

      return 0;
}