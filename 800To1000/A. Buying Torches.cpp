#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, k;
    cin >> x >> y >> k;
    long long reqstick = k * y + k;
    long long cnt = 0;
    long long curstick = 1;
    cnt = 1;
    curstick = x;
    reqstick -= curstick;
    x--;

    cnt += (reqstick + x - 1) / x;

    cnt += k;

    cout << cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}