#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &e : v)
        cin >> e;

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        // if (v[i] >= n)
        //     continue;
        long long iter = min((long long)n, (long long)v[i] * v[i]);
        for (int diff = v[i]; diff <= iter; diff += diff)
        {
            if (i + diff < n and v[i] * v[diff + i] == diff)
                res++;

            if (i - diff >= 0 and v[i] * v[i-diff] == diff and v[i] != v[i - diff])
                res++;
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
