#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    bool f = false;
    vector<int> v(n);
    for (auto &e : v)
    {
        cin >> e;

        if (e == 67)
            f = true;
    }

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