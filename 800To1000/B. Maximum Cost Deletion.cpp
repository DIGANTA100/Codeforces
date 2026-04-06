#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    int m = unique(s.begin(), s.end()) - s.begin();

    long long res = n * a + max(n * b, (m / 2 + 1) * b);
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