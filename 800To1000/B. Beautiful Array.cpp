#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, b, s;
    cin >> n >> k >> b >> s;
    long long edge = k * b + k - 1 + (n - 1) * (k - 1);
    if (s < k * b or s > edge)
    {
        cout << -1;
        return;
    }

    vector<long long> v(n, 0);
    v[n - 1] = k * b;
    s -= v[n - 1];

    for (int i = 0; i < n - 1; i++)
    {
        if (s >= k - 1)
        {
            v[i] = k - 1;
            s -= v[i];
        }
        else
        {
            v[i] = s;
            s -= v[i];
        }
    }
    v[n - 1] += s;

    for (auto &e : v)
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