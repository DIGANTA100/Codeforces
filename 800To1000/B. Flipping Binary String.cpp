#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;


    vector<int> ones, zeros;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1') ones.push_back(i + 1);
        else zeros.push_back(i + 1);
    }

    int c1 = ones.size();
    int c0 = zeros.size();

    if (c1 % 2 == 0)
    {
        cout << c1 << "\n";
        for (int i = 0; i < c1; i++)
            cout << ones[i] << " \n"[i == c1 - 1];
        if (c1 == 0) cout << "\n";
        return;
    }

    if (c0 % 2 == 1)
    {
        cout << c0 << "\n";
        for (int i = 0; i < c0; i++)
            cout << zeros[i] << " \n"[i == c0 - 1];
        if (c0 == 0) cout << "\n";
        return;
    }

    cout << -1 << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}