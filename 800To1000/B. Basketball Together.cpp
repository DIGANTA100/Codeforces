#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long d;
    cin >> n >> d;

    vector<long long> p(n);
    for (auto &e : p) cin >> e;

    sort(p.begin(), p.end(), greater<long long>());

    int res = 0;
    long long need = 0;

    for (int i = 0; i < n; i++)
    {
        long long f = (d / p[i]) + 1;
        need += f - 1;

        if ((long long)(i + 1) + need > n)
            break;

        res++;
    }

    cout << res;
}