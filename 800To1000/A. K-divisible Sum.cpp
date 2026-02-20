#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    if (k >= n)
    {

        cout << ((k + n - 1) / n);
        return;
    }

    long long times = (n + k - 1) / k;
    cout << ((times * k) + n - 1) / n;
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
