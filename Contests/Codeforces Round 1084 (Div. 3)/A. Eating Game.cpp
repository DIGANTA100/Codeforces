#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);
    int mx = -10000;
    for (auto &e : v)
    {
        cin >> e;
        mx = max(mx, e);
    }

    int cnt = 0;

    for (auto e : v)
    {
        if (mx == e)
            cnt++;
    }

    cout << cnt;
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