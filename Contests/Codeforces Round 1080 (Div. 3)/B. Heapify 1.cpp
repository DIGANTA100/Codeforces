#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n + 10);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x] = i;
    }

    bool f = true;

    for (int i = 1; i <= n; i++)
    {
        int x = i;
        int y = v[x];
        while (x % 2 == 0)
        {
            x /= 2;
        }

        while (y % 2 == 0)
        {
            y /= 2;
        }

        if (x != y)
        {
            f = false;
            break;
        }
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