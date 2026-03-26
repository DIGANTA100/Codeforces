#include <bits/stdc++.h>
using namespace std;

bool isprm(int x)
{
    if (x <= 1)
        return false;

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}

void solve()
{
    int x, k;
    cin >> x >> k;

    bool f = false;

    if (k == 1)
    {
        f = isprm(x);
    }
    else if (x == 1 and k == 2)
    {
        f = true;
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