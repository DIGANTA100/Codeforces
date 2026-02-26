#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, d;
    cin >> n >> m >> d;
    int upbox = d / m;
    int pertower = upbox + 1;

    cout << (n + pertower - 1) / pertower;
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