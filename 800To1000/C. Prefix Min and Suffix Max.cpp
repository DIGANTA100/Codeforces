#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &e : v)
        cin >> e;

    vector<int> pre(n), suf(n);

    pre[0] = v[0];
    for (int i = 1; i < n; i++)
        pre[i] = min(pre[i - 1], v[i]);

    suf[n - 1] = v[n - 1];
    
    for (int i = n - 2; i >= 0; i--)
        suf[i] = max(suf[i + 1], v[i]);

    string res = "";

    for (int i = 0; i < n; i++)
    {
        if (v[i] == pre[i] or v[i] == suf[i])
            res += '1';
        else
            res += '0';
    }

    cout << res;
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