#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int &e : v)
    cin >> e;
  for (int i = 1; i < v.size() - 1; i++)
  {
    int left = v[i - 1];
    int right = v[i + 1];
    int mid = v[i] / 2;

    int mn = min({left, right, mid});

    v[i - 1] -= mn;
    v[i + 1] -= mn;
    v[i] -= mn * 2;
  }

  bool f = true;

  for (auto e : v)
  {
    if (e != 0)
    {
      f = false;
      break;
    }
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