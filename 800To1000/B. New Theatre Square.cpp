#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    y = min(y, 2 * x);

    vector<string> v(n);
    for (auto &e : v)
        cin >> e;

    long long res = 0;

    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (j < m)
        {
            if (v[i][j] == '*')
            {
                j++;
                continue;
            }

            int k = j;
            while (k + 1 < m and v[i][k + 1] == '.')
                k++;

            int l = k - j + 1;
            res += (l / 2) * y + (l % 2) * x;

            j = k + 1;
        }
    }

    cout << res;
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