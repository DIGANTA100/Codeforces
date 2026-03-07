#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v(7);
    for (auto &e : v)
    {
        cin >> e;
        sum += e;
    }

    if (n % sum == 0)
    {
        n -= ((n / sum) - 1) * sum;

        int ans;
        for (int i = 0; i < 7; i++)
        {
            if (n <= v[i])
            {
                ans = i;
                break;
            }

            else
            {
                n -= v[i];
            }
        }

        cout << ans + 1;
        return;
    }

    n -= (n / sum) * sum;
    int ans;
    for (int i = 0; i < 7; i++)
    {
        if (n <= v[i])
        {
            ans = i;
            break;
        }

        else
        {
            n -= v[i];
        }
    }

    cout << ans + 1;
    return;
}

int main()
{
    solve();
}