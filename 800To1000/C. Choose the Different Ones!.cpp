#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    set<int> a, b;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x <= k)
            a.insert(x);
    }

    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        if (x <= k)
            b.insert(x);
    }
    if (a.size() < k / 2 or b.size() < k / 2)
    {
        cout << "NO";
        return;
    }
    int hsh[k + 1] = {0};
    for (auto it = a.begin(); it != a.end(); it++)
    {
        hsh[*it] = 1;
    }

    for (auto it = b.begin(); it != b.end(); it++)
    {
        hsh[*it] = 1;
    }

    bool f = true;

    for (int i = 1; i <= k; i++)
    {
        if (!hsh[i])
        {
            f = false;
            break;
        }
    }

    if (f)
        cout << "YES";

    else
        cout << "NO";
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