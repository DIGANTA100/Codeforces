#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &e : v)
        cin >> e;

    auto func = [](int a, int b)
    {
        return a > b;
    };

    sort(v.begin(), v.end(), func);

    for (auto e : v)
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