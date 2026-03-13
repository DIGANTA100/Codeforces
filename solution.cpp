#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    bool f = true;
    for (auto &e : v)
        cin >> e;

    int firstcnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i - 1])
        {
            f = false;
            break;
        }

        firstcnt++;
    }

    if (f)
    {
        cout << 0;
        return;
    }

    int lastcnt = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] != v[i + 1])
            break;
        lastcnt++;
    }

    if (v[0] != v[n - 1])
    {
        int mx = max(firstcnt, lastcnt);
        cout << n - mx;
        return;
    }

    else
    {
        cout << n - (firstcnt + lastcnt);
        return;
    }
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