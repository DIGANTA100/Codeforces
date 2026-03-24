#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> r(n);
    for (int i = 0; i < n; i++)
        cin >> r[i];

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    partial_sum(r.begin(), r.end(), r.begin());
    
    partial_sum(b.begin(), b.end(), b.begin());

    int brr = max(0, *max_element(r.begin(), r.end()));
    int bbb = max(0, *max_element(b.begin(), b.end()));

    cout << brr + bbb << endl;;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}