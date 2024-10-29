#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;  cin>>q;
    
        map<string,string>ans,mp;
        while(q--){
            string a,b;
            cin>>a>>b;
            if(mp.find(a)!=mp.end()){
                string s=mp[a];
                ans[s]=b;
                mp.erase(a);
                mp[b]=s;
            }
            else{
            ans[a]=b;
            mp[b]=a;
            }

    }
      cout<<mp.size()<<endl;
      for(auto i:ans)cout<<i.first<<" "<<i.second<<endl;
 // cout<<mp[st[0].second];
 
      return 0;
}