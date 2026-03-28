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

    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int mx = 0;

            for (int d = 0; d < 4; d++)
            {
                int ni = i + dx[d];
                int nj = j + dy[d];

                if (ni >= 0 and ni < n and nj >= 0 and nj < m)
                    mx = max(mx, v[ni][nj]);
            }

            if (v[i][j] > mx)
                cout << mx;
            else
                cout << v[i][j];

            if (j < m - 1)
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}