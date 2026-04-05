#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << -1;
        return;
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[i] = n - i;

    for (auto e : v)
        cout << e << " ";
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