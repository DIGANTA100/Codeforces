#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (auto &v : a) cin >> v;

    int res = 0;
    long long mn = a[0], mx = a[0];

    for (int i = 1; i < n; i++)
    {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);

        if (mx - mn > 2 * x)
        {
            res++;
            mn = mx = a[i];
        }
    }

    cout << res << "\n";
}

int main()
{
   
    int t;
    cin >> t;
    while (t--)
        solve();
}