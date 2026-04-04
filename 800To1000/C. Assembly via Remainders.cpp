#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> x(n - 1);
    for (auto &e : x)
        cin >> e;

    int s = 1000;
    cout << s << " ";

    for (int i = 0; i < n - 1; i++)
    {
        s += x[i];
        cout << s << " ";
    }
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