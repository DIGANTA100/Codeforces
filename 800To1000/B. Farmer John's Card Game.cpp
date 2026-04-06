#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];

    vector<int> p(n, -1);
    bool f = true;

    for (int i = 0; i < n; i++)
    {
        sort(v[i].begin(), v[i].end());

        int mn = v[i][0];
        if (mn >= n)
        {
            f = false;
            break;
        }

        p[mn] = i;

        for (int j = 1; j < m; j++)
        {
            if (v[i][j] != v[i][j - 1] + n)
            {
                f = false;
                break;
            }
        }

        if (!f) break;
    }

    if (!f)
    {
        cout << -1;
        return;
    }

    for (int i = 0; i < n; i++)
        cout << p[i] + 1 << " ";
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