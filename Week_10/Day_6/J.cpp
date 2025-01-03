#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
     int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        
            s.erase(arr[i]-1);
            s.insert(arr[i]);
    }
    cout<<s.size()<<endl;

      return 0;
}