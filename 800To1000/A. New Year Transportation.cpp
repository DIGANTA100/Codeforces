#include <bits/stdc++.h>
using namespace std;
void solve()
{
}

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
    }

    bool f = false;
    int id = 1;

    while (true)
    {
        if (id == t)
        {
            f = true;
            break;
        }
        else if (id > t)
            break;

        id += v[id];
    }

    if (f)
        cout << "YES";
    else
        cout << "NO";
}
