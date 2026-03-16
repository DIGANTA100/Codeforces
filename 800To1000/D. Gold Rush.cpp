#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    queue<int> q;
    bool f = false;

    q.push(n);
    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        if (x == m)
        {
            f = true;
            break;
        }

        if (x % 3 == 0)
        {
            q.push(x / 3);
            q.push((x / 3) * 2);
        }
    }

    if (f)
        cout << "YES";

    else
        cout << "NO";
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