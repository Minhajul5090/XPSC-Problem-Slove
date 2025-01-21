#include<bits/stdc++.h>
#define CODE ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    CODE
    int count[100005]={0},i,j,n,num,ans=1;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>num;
		for (j=1;j*j<num;j++)
		{
			if (num%j==0)
			{
				count[j]++;
				count[num/j]++;
			}
		}
		
		if (j*j==num) count[j]++;
	}
	for (i=2;i<100000;i++)
	{
		ans=max(ans,count[i]);
	}
	printf("%d",ans);

      return 0;
}