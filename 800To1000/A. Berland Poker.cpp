#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    int cfe = n / k;

    int mxjok;
    int mnjok;

    if (m <= cfe)
    {
        mxjok = m;
        mnjok = 0;
    }

    else
    {
        mxjok = cfe;
        m -= cfe;
        int rp = k - 1;
        mnjok = (m + rp - 1) / rp;
    }

    cout << mxjok - mnjok;
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