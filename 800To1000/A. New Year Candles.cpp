#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b > a)
    {
        cout << a;
        return 0;
    }

    int res = 0;
    while (a >= b)
    {

        res += b;
        a -= b;
        a++;
    }

    res += a;
    cout << res;
    return 0;
}
