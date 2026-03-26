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
    int last = -1;

    for (int i = 0; i < n; i++)
    {
        if (v[i] - last > 1)
        {
            res++;
            last = v[i];
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