#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << -1;
        return;
    }
    int sum = 3 + (n - 1) * 2;
    bool need4 = false;
    if (sum % 3 == 0)
        need4 = true;
    string s;
    for (int i = 0; i < n - 2; i++)
    {
        s += '2';
    }
    if (need4)
        s += '4';
    else
        s += '2';
    s += '3';
    cout << s;
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