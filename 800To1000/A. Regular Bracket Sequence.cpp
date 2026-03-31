#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    if (n % 2 != 0 || s[0] == ')' || s[n - 1] == '(')
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}