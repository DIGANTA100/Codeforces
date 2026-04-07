#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n + 5), b(n + 5), pref(n + 5);

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    a[n + 1] = 0;

    for (int i = n; i > 0; i--)
        a[i] = max({a[i], a[i + 1], b[i]});

    pref[0] = 0;
    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + a[i];

    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}