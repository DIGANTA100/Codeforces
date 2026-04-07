#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    multiset<int> ms;
    for (int i = 1; i <= n; i++)
        ms.insert(i);

    vector<pair<int, int>> ops;

    for (int i = 0; i < n - 1; i++)
    {
        auto it = ms.end();
        it--;
        int a = *it;
        ms.erase(it);

        it = ms.end();
        it--;
        int b = *it;
        ms.erase(it);

        ms.insert((a + b + 1) / 2);
        ops.push_back({a, b});
    }

    cout << *ms.begin() << endl;
    for (auto &p : ops)
        cout << p.first << " " << p.second << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}