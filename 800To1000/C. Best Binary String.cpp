#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    char x = '0';
    for (auto& c : s) {
      if (c == '?') c = x;
      x = c;
    }
    cout << s << '\n';
  }
}