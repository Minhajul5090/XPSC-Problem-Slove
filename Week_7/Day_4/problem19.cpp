#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>v;
        while(n>0)
        {
            if(n%2==0){
                v.push_back(0);
            }
            else{
                if((n-1)/2%2==0){
                    v.push_back(1);
                    n-=1;
                }
                else{
                    v.push_back(-1);
                    n+=1;
                }
            }
            n/=2;
        }
        cout<<v.size()<<endl;
        for(auto u:v) cout<<u<<" ";cout<<endl;
    }
}
