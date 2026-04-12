#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) {
        cin >> i;
    }

    vector<int> cnt(n + 1);
    for(auto i : a) cnt[i]++;

    if(cnt[0] == 0) cout << "NO\n";
    else if(cnt[1] > 0) cout << "YES\n";
    else cout << (cnt[0] == 1? "YES" : "NO") << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int ttt = 1;
    cin >> ttt;
    while(ttt--) {
        solve();
    }
}