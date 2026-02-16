#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int total0 = 0, total1 = 0;
    for (auto &e : s)
    {
        if (e == '0')
            total0++;
        else
            total1++;
    }

    int need0 = 0, need1 = 0;
    int res = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            need1++;
        else
            need0++;

        if (need0 <= total0 and need1 <= total1)
            res = i;

        else
            break;
    }

    cout << s.size() - 1 - res;
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
