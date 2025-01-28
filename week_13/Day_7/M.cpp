#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        
int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
 
        int total = 0;
        for (int i = 0; i < n; i++)
            total ^= v[i];
 
        if (total == 0)
        {
            cout << "YES" << endl;
            continue;
        }
 
        int pre = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            pre ^= v[i];
            if (pre == total)
            {
                c++;
                pre = 0;
            }
        }
 
        if (c >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

      return 0;
}