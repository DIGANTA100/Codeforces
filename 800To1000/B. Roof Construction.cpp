#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int p = 0;
    while ((1 << (p + 1)) <= n - 1)
        p++;
    for (int i = (1 << p) - 1; i >= 0; i--)
        cout << i << " ";
    for (int i = (1 << p); i < n; i++)
        cout << i << " ";
    cout << endl;
}

int main() {

    int t;
    cin >> t;
    while (t--)
        solve();
}