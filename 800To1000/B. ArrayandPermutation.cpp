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
  int n;
  cin >> n;
  vector<int> permu(n + 10);
  for (auto i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    permu[x] = i;
  }

  bool f = true;

  int pre;
  cin >> pre;

  for (int i = 2; i <= n; i++)
  {
    int cur;
    cin >> cur;

    if (permu[cur] < permu[pre])
      f = false;

    pre = cur;
  }

  if (f)
    cout << "YES";
  else
    cout << "NO";
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