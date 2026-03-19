#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 1;
    bool anydouble = false;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != s[i + 1])
            cnt++;
        else
            anydouble = true;
    }
    if (anydouble and s[0] != s[s.size() - 1])
        cout << cnt + 1;
    else
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