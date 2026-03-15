#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;

    long long mx, mn;
    mx = max(a, b);
    mn = min(a, b);

    if (mx % mn != 0)
    {
        cout << -1;
        return;
    }

    long long res = mx / mn;

    int cnt = 0;

    while (true)
    {
        if (res % 8 == 0)
            res /= 8;

        else if (res % 4 == 0)
            res /= 4;

        else if (res % 2 == 0)
            res /= 2;

        else
            break;

        cnt++;
    }

    if (res != 1)
    {
        cout << -1;
        return;
    }

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