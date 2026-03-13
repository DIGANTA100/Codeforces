#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    int ha[1 + 2 * n]={0};
    int  hb[1 + 2 * n]={0};

    int prev = 1;

    for (int i = 2; i <= n; i++)
    {
        if (a[i] != a[i - 1])
        {
            ha[a[i - 1]] = max(i - prev,ha[a[i - 1]]);
            prev = i;
        }
    }

    ha[a[n]] = max(n + 1 - prev, ha[a[n]] );

    prev = 1;

    for (int i = 2; i <= n; i++)
    {
        if (b[i] != b[i - 1])
        {
            hb[b[i - 1]] = max(i - prev,hb[b[i - 1]]);
            prev = i;
        }
    }

    hb[b[n]] = max(n + 1 - prev,hb[b[n]]);

    int mx = -100;
    for (int i = 1; i <= 2 * n; i++)
    {
        mx = max(ha[i] + hb[i], mx);
    }

    cout << mx;
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