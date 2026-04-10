#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m), q(k);
    for (auto &e : a) cin >> e;
    for (auto &e : q) cin >> e;

    vector<bool> used(n + 1, false);
    for (auto e : q) used[e] = true;

    string res = "";
    for (int i = 0; i < m; i++)
    {
        if (k == n or (k == n - 1 and !used[a[i]]))
            res += '1';
        else
            res += '0';
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