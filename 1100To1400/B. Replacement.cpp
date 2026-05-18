#include <bits/stdc++.h>
#define all(s) s.begin(), s.end()

using namespace std;
using ll = long long;

const int _N = 1e5 + 5;

void solve() {
	int n; cin >> n;
	string s, t; cin >> s >> t;
	int cnt0 = count(all(s), '0'), cnt1 = n - cnt0;
	for (int i = 0; i < n - 1; i++) {
		if (cnt0 == 0 || cnt1 == 0) {
			cout << "NO" << '\n';
			return;
		}
		if (t[i] == '1') cnt0--;
		else cnt1--;
	}
	cout << "YES" << '\n';
}

int main() {
	int T; cin >> T;
	while (T--) {
		solve();
	}
}