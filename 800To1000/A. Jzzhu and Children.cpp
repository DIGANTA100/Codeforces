#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    queue<pair<int, int>> q;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        q.push(make_pair(x, i));
    }

    while (q.size() != 1)
    {
        pair<int, int> temp = q.front();
        q.pop();
        temp.first -= m;
        if (temp.first > 0)
            q.push(temp);
    }

    cout << q.front().second;
}
