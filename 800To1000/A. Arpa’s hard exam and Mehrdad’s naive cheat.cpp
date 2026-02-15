#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if(!n)
    {
        cout<<1;
        return 0;
    }

    int mod = n % 4;
    int res;
    switch (mod)
    {
    case 0:
        res = 6;
        break;
    case 1:
        res = 8;
        break;
    case 2:
        res = 4;
        break;
    default:
        res = 2;
    }

    cout << res;
}
