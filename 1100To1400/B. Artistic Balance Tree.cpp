#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#define int long long
using namespace std;
int n,a,x,m,sum;
priority_queue <int> nm[2];
bool hv[2];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin>>T;
	while(T--)
	{
	    sum=0;
		hv[0]=hv[1]=0;
		while(!nm[0].empty()) nm[0].pop();
		while(!nm[1].empty()) nm[1].pop();
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			cin>>a;
			nm[i&1].push(a);
			sum+=a;
		}
		for(int i=1;i<=m;i++)
		{
			cin>>x;
			if((!nm[x&1].empty()&&nm[x&1].top()>=0)||!hv[x&1])
			{
				sum-=nm[x&1].top();
				nm[x&1].pop();
				hv[x&1]=1;
			}
		}
		cout<<sum<<"\n";
	}
}