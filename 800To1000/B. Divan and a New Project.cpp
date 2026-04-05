#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    long long res = 0;
    vector<long long> x(n + 1);
    x[0] = 0;

    int left = -1, right = 1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            x[v[i].second] = right;
            res += 2LL * v[i].first * right;
            right++;
        }
        else
        {
            x[v[i].second] = left;
            res += 2LL * v[i].first * abs(left);
            left--;
        }
    }

    cout << res << "\n";
    for (int i = 0; i <= n; i++)
        cout << x[i] << " ";
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