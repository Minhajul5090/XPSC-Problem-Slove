#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const int N= (1LL<<15);
vector<int>p;
int reverse_num(int x){
             int a=0;
           int tm=x;
            while(tm!=0){
               int r=tm%10;
                tm=tm/10;
              a=(a*10)+r;
                } 
            return a;
            
            
}
void Make_palindrome(){
  for(int i=0; i<N; i++){
    if(reverse_num(i)==i){
        p.push_back(i);
    }
  }
}
int main()
{
    CODE
    Make_palindrome();
    int t;         cin>>t;
    while(t--){
        int n;   cin>>n;
        vector<int>v(n),cn(N+1);
        for(int i=0; i<n; i++){
            cin>>v[i];
            cn[v[i]]++;
        }
         
        cout<<p.size()<<'\n';
        ll c=n;
        for(int i=0; i<n; i++){
           for(int j=0; j<p.size(); j++){
              int y=(v[i]^p[j]);
              c+=cn[y];
           }
        }
       cout<<c/2<<endl;
    }

      return 0;
}