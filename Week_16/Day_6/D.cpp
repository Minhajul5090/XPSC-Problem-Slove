#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
int ans=0;
vector<int> v;

void abc(int l1,int r1,int l2,int r2){
    int mxL=0;
    for(int i=l1;i<=r1;i++){
        mxL=max(mxL,v[i]);
    }
    int mnR=INT_MAX;
    for(int i=l2;i<=r2;i++){
        mnR=min(mnR,v[i]);
    }
    if(mxL>mnR){
        int R=l2;
        for(int i=l1;i<=r1;i++){
            swap(v[i],v[R]);
            R++;
        }
        ans++;
    }
    if(l1==r1)return;
    int mid1=(l1+r1)/2;
    int mid2=(l2+r2)/2;

    abc(l1,mid1,mid1+1,r1);
    abc(l2,mid2,mid2+1,r2);
}

int main()
{
    CODE
    int t;         cin>>t;
    while(t--){
        int n;              cin>>n;
        v.resize(n+1);

        for(int i=1;i<=n;i++){
            cin>>v[i];
        }

        ans=0;
        if(is_sorted(v.begin()+1,v.begin()+n+1)){
            cout<<0<<endl;
            continue;
        }

        int mid=(n+1)/2;
        abc(1,mid,mid+1,n);

        if(is_sorted(v.begin()+1,v.begin()+n+1)){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

      return 0;
}