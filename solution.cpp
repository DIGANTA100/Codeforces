#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;
    if (b == 1)
    {
        cout << "NO";
        return;
    }
    cout<<"YES"<<endl;

    cout << a * b << ' ' << a << ' ' << a * (b + 1);
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