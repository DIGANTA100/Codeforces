#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    vector<char> v(n);
    for (int i = 0; i < n; i++)
        v[i] = s[i];

    vector<int> upper, lower;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 'b')
        {
            v[i] = 0;
            if (!lower.empty())
            {
                v[lower.back()] = 0;
                lower.pop_back();
            }
            continue;
        }

        if (v[i] == 'B')
        {
            v[i] = 0;
            if (!upper.empty())
            {
                v[upper.back()] = 0;
                upper.pop_back();
            }
            continue;
        }

        if (islower(v[i]))
            lower.push_back(i);
        else
            upper.push_back(i);
    }

    string res = "";
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
            res += v[i];
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