#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &e : v)
        cin >> e;

    bool f = true;

    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
            f = false;
    }

    if (f)
    {
        cout << v.size();
        return;
    }

    int wrongid = -1;

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            wrongid = i;
        }
    }

    cout << 1;
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