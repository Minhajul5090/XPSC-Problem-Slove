#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        ll i,j,k,n,d=0,nn,pn,tmp=0,tmp2;
    cin>>n;
    vector<int>ng,pg,x(n),y(n);
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>y[i];
    }
    for(i=0;i<n;i++)
    {
        k=y[i]-x[i];
        if(k<0) ng.push_back(k);
        else pg.push_back(k);
    }
    sort(ng.begin(),ng.end(),greater<>());
    sort(pg.begin(),pg.end());
    nn=ng.size();
    pn=pg.size();
    i=0; j=0;
    for(j=0;j<pn;j++)
    {
        if(i<nn && ng[i]+pg[j]>=0) {pg[j]=-1; d++; i++; }
    }
    for(j=0;j<pn;j++)
    {
        if(pg[j]>=0 && tmp ) { d++; tmp=0;}
        else if(pg[j]>=0) tmp=1;
    }
cout<<d<<endl;
    }

      return 0;
}