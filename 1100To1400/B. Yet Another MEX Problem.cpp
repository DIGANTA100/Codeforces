#include<bits/stdc++.h>
using namespace std;
#define re register
#define ll long long
#define forl(i,a,b) for(re ll (i)=(a);i<=(b);(i)++)
#define forr(i,a,b) for(re ll (i)=(a);i>=(b);(i)--)
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define endl '\n'
ll _t_;
ll n,m;
ll maxn;
ll a[1000010];
ll b[1000010];
void _clear(){}
void solve()
{
    _clear();
    cin>>n>>m;
    forl(i,1,n)
        cin>>a[i],a[i]=min(a[i],n+1);
    forl(i,0,n+5)
    	b[i]=0;
    ll mex=0;
	forl(i,1,n)
		b[a[i]]++;
	while(b[mex])
		mex++;
	cout<<min(mex,m-1)<<endl; 
}
int main()
{
    IOS;
    _t_=1;
    cin>>_t_;
    while(_t_--)
        solve();
    return 0;
}