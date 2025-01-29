#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
   string s;   cin>>s;
   list<char>l;
   for(auto i:s)l.push_back(i);
   int ans=0;
   auto it=l.begin();
   
   while(true){
      auto it1 = it;
      it1++;
      if(it1==l.end())break;

      if(*it==*it1){
        ans++;
       if(it==l.begin()){
         l.erase(it);
         l.erase(it1);
         it=l.begin();
       }
       else{
        auto tm=it;
        tm--;
        l.erase(it);
        l.erase(it1);
        it=tm;
       }
      }
      else it++;
   }
   if(ans%2==0)cout<<"NO";
   else cout<<"YES";
      return 0;
}