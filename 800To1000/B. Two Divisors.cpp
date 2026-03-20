#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;
    if (b % a == 0)
    {
        cout << (b * b) / a;

        return;
    }

    cout << (b * a) / __gcd(a, b);
    return;
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