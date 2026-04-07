#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> big(26, 0), small(26, 0);

    for (auto &c : s)
    {
        if (c >= 'A' and c <= 'Z')
            big[c - 'A']++;
        else
            small[c - 'a']++;
    }

    int res = 0;

    for (int i = 0; i < 26; i++)
    {
        int p = min(big[i], small[i]);
        res += p;
        big[i] -= p;
        small[i] -= p;

        int add = min(k, max(big[i], small[i]) / 2);
        res += add;
        k -= add;
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