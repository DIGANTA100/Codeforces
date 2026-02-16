#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (auto &e : v)
        cin >> e;

    int res = 0;
    for (int i = 0; i < n;)
    {
        bool confilct = false;
        if (i + 1 < n and (v[i] == 7 - v[i + 1] or v[i] == v[i + 1]))
            confilct = true;
        if (confilct)
        {
            confilct = false;

            if (i + 1 + 1 < n and (v[i + 1] == 7 - v[i + 1 + 1] or v[i + 1] == v[i + 1 + 1]))
                confilct = true;

            if (confilct)
            {
                res++;
                i += 2;
            }
            else
            {
                res++;
                i++;
            }
        }

        else
            i++;
    }

    cout<<res;
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