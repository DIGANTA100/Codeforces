#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, r, b;
    cin >> n >> r >> b;

    int p = r / (b + 1);
    int q = r % (b + 1);

    string res = "";

    for (int i = 0; i < q; i++)
        res += string(p + 1, 'R') + 'B';

    for (int i = q; i < b; i++)
        res += string(p, 'R') + 'B';

    res += string(p, 'R');

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