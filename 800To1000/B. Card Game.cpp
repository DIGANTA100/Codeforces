#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int cnt = 0;
    int suneet[2] = {a, b};
    int slavic[2] = {c, d};

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            int su = 0, sl = 0;
            if (suneet[i] > slavic[j])
                su++;
            else if (slavic[j] > suneet[i])
                sl++;

            if (suneet[1 - i] > slavic[1 - j])
                su++;
            else if (slavic[1 - j] > suneet[1 - i])
                sl++;

            if (su > sl)
                cnt++;
        }
    }

    cout << cnt;
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
