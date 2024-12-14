#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n; cin >> n;
    vector<int> a(n - 1), b, c;
    int mx = 0;
    for(auto &i:a){
        cin >> i;
    }
    c.push_back(a[n - 2]);
    for(int i = n - 2; i > 0; i--){
        c.push_back(a[i] | a[i - 1]);
    }
    c.push_back(a[0]);
    reverse(c.begin(), c.end());
    bool f=false;
    for(int i = 0; i < n - 1; i++){
        if((c[i] & c[i + 1]) != a[i]){
            cout <<"-1\n";
            f=true;
            break;
        }
    }
    if(!f){
    for(auto i:c)cout << i <<' ';
    cout <<'\n';
    }
    }

      return 0;
}