#include<bits/stdc++.h>
 
using namespace std;
 
long long gcd(long long x, long long y)
{
    if(x == 0) return y;
    else return gcd(y % x, x);
}
 
void solve()
{
    long long l, r, g;
    scanf("%lld %lld %lld", &l, &r, &g);
    long long L = l + (l % g == 0 ? 0 : g - (l % g));
    long long R = r - r % g;
    for(int i = 0; i <= (R - L) / g; i++)
        for(int j = 0; j <= i; j++)
            if(gcd(L + j * g, R - (i - j) * g) == g)
            {
                printf("%lld %lld\n", L + j * g, R - (i - j) * g);
                return;
            }   
    puts("-1 -1");
}
 
int main()
{                             
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++) solve();
}