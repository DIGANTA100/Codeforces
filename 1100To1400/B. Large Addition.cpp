
#include <iostream>
using namespace std;
 
#define ll long long
 
void solve() {
  ll n; cin >> n;
  n = n - n % 10 + (n % 10 + 1) % 10;
  while (n > 9) {
    if (n % 10 == 0) {
      cout << "NO\n";
      return;
    }
    n /= 10;
  }
  cout << (n == 1 ? "YES\n" : "NO\n");
}
 
int main() {

  int t; cin >> t;
  for (int i = 0; i < t; ++i) solve();
  return 0;
}