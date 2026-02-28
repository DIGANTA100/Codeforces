#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    int id = -1;
    int mx = -10000;
    for (int i = 1; i <= n; i += 1)
    {
        cin >> v[i];
        if (v[i] > mx)
        {
            mx = v[i];
            id = i;
        }
    }

    if (n == 1)
    {
        cout << v[n];
        return;
    }

    swap(v[1], v[id]);

    for (int i = 1; i <= n; i++)
        cout << v[i] << ' ';

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