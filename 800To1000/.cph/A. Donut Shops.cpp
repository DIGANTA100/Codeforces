#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;

    cout << (a < c ? 1 : -1);
    cout << " ";
    
    cout << (c < a * b ? b : -1);
    cout << endl;
}

int main()
{
 
    int t;
    cin >> t;
    while (t--)
        solve();
}