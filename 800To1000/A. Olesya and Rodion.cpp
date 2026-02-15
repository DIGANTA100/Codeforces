#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;

    if (t == 10 and n < 2)
    {
        cout << -1;
        return 0;
    }

    string res = "";
    if (t == 10)
    {
        n -= 2;
        res += '1';
        res += '0';
        while (n--)
        {
            res += '0';
        }

        cout << res;
        return 0;
    }

    while (n--)
    {

        res += char('0' + t);
    }

    cout << res;
}
