#include <bits/stdc++.h>
using namespace std;

int digitsum(long long x)
{
  int sum = 0;
  while (x > 0)
  {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}

void solve()
{
  long long x;
  cin >> x;
  int cnt = 0;
  for (long long y = x; y <= x + 90; y++)
  {
    if (y - digitsum(y) == x)
      cnt++;
  }

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