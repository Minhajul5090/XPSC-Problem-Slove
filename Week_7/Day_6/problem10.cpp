#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
         ll n;
	    cin>>n;
	    ll x=n;
	    vector<int>v;
	    while(x!=0)
	    {
	        if(x%2==0)
	        {
	            v.push_back(0);
	        }
	        else
	        {
	            v.push_back(1);
	        }
	        x=x>>1;
	        
	    }
	    ll i,c=0,j=0;
	    for(i=v.size()-1;i>=0;i--)
	    {
	        if(v[i]==1)
	        {
	          
	            j++;
	        }
	        else 
	        {
	            if(j>=2)
	            c++;
	        }
	    }
	    cout<<(1<<c)<<endl;
    }

      return 0;
}