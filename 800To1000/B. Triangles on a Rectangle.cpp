#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long w, h;
    cin >> w >> h;

    long long res = 0;

    for (int i = 0; i < 4; i++)
    {
        int k;
        cin >> k;

        vector<long long> v(k);
        for (auto &e : v)
            cin >> e;

        long long mul = (i < 2) ? h : w;

        long long cur = (v.back() - v[0]) * mul;
        res = max(res, cur);
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