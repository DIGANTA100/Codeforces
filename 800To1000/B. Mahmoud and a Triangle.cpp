#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &e : v)
        cin >> e;

    sort(v.begin(), v.end());
    bool f = false;
    for (int i = 0; i < v.size() - 2; i++)
    {
        if (v[i] + v[i + 1] > v[i + 2])
        {
            f = true;
            break;
        }
    }

    if (f)
        cout << "YES";
    else
        cout << "NO";
}