#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<pair<int,int>, int> cnt;

    for (int i = 0; i < n; i++)
    {
        int h, m;
        cin >> h >> m;
        cnt[{h, m}]++;
    }

    int res = 0;
    for (auto &p : cnt)
        res = max(res, p.second);

    cout << res << "\n";
}