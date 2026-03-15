#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, p, m;
    cin >> n >> k >> p >> m;

    vector<long long> a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    long long wp = a[p];

    vector<long long> deck;

    vector<int> id;

    for (int i = 1; i <= n; i++)

    {
        deck.push_back(a[i]);
        id.push_back(i);
    }

    int wcid = p;

    long long fcos = 0;

    int need = (p > k) ? p - k : 0;


    for (int s = 0; s < need; s++)
    {
        int best = -1;
             for (int i = 0; i < k; i++)
            if (best == -1 || deck[i] < deck[best])
                best = i;
        fcos += deck[best];
     long long c = deck[best];
        int iid = id[best];
     deck.erase(deck.begin() + best);
        id.erase(id.begin() + best);
        deck.push_back(c);
        id.push_back(iid);
    }

         if (fcos + wp > m)
    {
        cout << 0;
        return;
    }

          long long lefft = m - fcos - wp;
    long long ans = 1;

    long long priceofcyc = wp;
    if (n > k)
    {
        vector<long long> diff;
        for (int i = 1; i <= n; i++)
        {
            if (i == p)
                continue;
            diff.push_back(a[i]);
        }
        sort(diff.begin(), diff.end());
 int need2 = n - k;
        for (int i = 0; i < need2 && i < (int)diff.size(); i++)
            priceofcyc += diff[i];
    }

    ans += lefft / priceofcyc;
    cout << ans;
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