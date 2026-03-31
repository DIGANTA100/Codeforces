#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    long long sum = 0;
    int idx = 0;

    for (int i = 0; i < m; i++)
    {
        long long x;
        cin >> x;

        while (sum + a[idx] < x)
        {
            sum += a[idx];
            idx++;
        }

        cout << idx + 1 << " " << x - sum << "\n";
    }
}