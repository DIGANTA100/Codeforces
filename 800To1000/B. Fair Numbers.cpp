#include <bits/stdc++.h>
using namespace std;

bool fair(long long x)
{
    long long tmp = x;
    while (tmp > 0)
    {
        int d = tmp % 10;
        tmp /= 10;
        if (d == 0) continue;
        if (x % d != 0) return false;
    }
    return true;
}

void solve()
{
    long long n;
    cin >> n;

    long long x = n;
    while (!fair(x))
        x++;

    cout << x << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}