
#include <bits/stdc++.h>
using namespace std;

struct cmp
{
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.first == b.first)
            return a.second > b.second;

        return a.first < b.first;
    }
};

void solve()
{
    int n, k;
    cin >> n >> k;

    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;

    for (int i = 1; i <= n; i++)
    {

        int x;
        cin >> x;
        pq.push({x, i});
    }
    while (!pq.empty())
    {
        pair<int, int> temp = pq.top();
        pq.pop();
        temp.first -= k;
        if (temp.first > 0)
            pq.push(temp);

        else
            cout << temp.second << ' ';
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
