#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int res = 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res = n / i;
            break;
        }
    }

    cout << res << " " << n - res;
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