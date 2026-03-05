#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long m = n / 2;

    long long sum = (m * (m + 1) * (2 * m + 1)) / 6;

    sum *= 8;

    cout << sum;
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