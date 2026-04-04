#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            long long now = 0;
            int ci, cj;

            ci = i, cj = j;
            while (ci >= 0 and ci < n and cj >= 0 and cj < m)
            {
                now += a[ci][cj];
                ci--, cj--;
            }

            ci = i, cj = j;
            while (ci >= 0 and ci < n and cj >= 0 and cj < m)
            {
                now += a[ci][cj];
                ci++, cj--;
            }

            ci = i, cj = j;
            while (ci >= 0 and ci < n and cj >= 0 and cj < m)
            {
                now += a[ci][cj];
                ci--, cj++;
            }

            ci = i, cj = j;
            while (ci >= 0 and ci < n and cj >= 0 and cj < m)
            {
                now += a[ci][cj];
                ci++, cj++;
            }

            now -= a[i][j] * 3;
            mx = max(mx, (int)now);
        }
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