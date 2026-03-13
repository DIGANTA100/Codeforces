#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    queue<int> q;
    bool f = false;
    int cur = -1;
    int curcnt = 0;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
        if (x != cur)
        {
            q.push(i);
            cur = x;
            if (curcnt == 1)
                f = true;

            curcnt = 0;
        }

        curcnt++;
    }

    if (f or n==1 or curcnt==1)
    {
        cout << -1;
        return;
    }

    while (!q.empty())
    {
        int first = q.front();

        int last;
        q.pop();
        if (!q.empty())
            last = q.front();

        else
            last = v.size();

        int sz = last - first;

        cout << last - 1 << ' ';
        for (int i = first; i < last - 1; i++)
            cout << i << ' ';
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