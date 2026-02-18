#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, a, b;
    cin >> x >> y >> a >> b;

    long long res1 = (x + y) * a;
    long long res2 = min(x, y) * b + a * (max(x, y) - min(x, y));

    cout << min(res1, res2);
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
