#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        v[i].resize(m);
        for (auto &e : v[i])
            cin >> e;
    }
    for (int i = 0; i < n; i++)
    {
        sort(v[i].begin(), v[i].end());
    }

    long long secsmall = 1e11;
    int id = -1;
    long long firstsmall = 1e11;
    for (int i = 0; i < n; i++)
    {
        if (v[i].size() >= 2)
        {
            if (v[i][1] < secsmall)
            {
                secsmall = v[i][1];
                id = i;
            }
        }

        else
        {
            if (v[i][0] < secsmall)
            {
                secsmall = v[i][0];
                id = i;
            }
        }

        if (v[i][0] < firstsmall)
            firstsmall = v[i][0];
    }

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == id)
            continue;

        if (v[i].size() >= 2)
        {
            sum += v[i][1];
        }

        else
            sum += v[i][0];
    }

    cout<<sum+firstsmall;
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