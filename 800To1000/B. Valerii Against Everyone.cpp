#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &e : v)
        cin >> e;

    bool f = false;

    for (int i = 0; i < n and !f; i++)
        for (int j = i + 1; j < n and !f; j++)
            if (v[i] == v[j])
                f = true;

    if (f)
        cout << "YES";
    else
        cout << "NO";
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