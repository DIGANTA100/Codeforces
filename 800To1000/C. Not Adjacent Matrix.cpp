#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  if (n == 2)
  {
    cout << -1;
    cout << endl;
    return;
  }
  int mat[n][n];
  int k = 1;

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < n; j++)
    {
      if (k > n * n)
        k = 2;

      mat[i][j] = k;
      k += 2;
    }
  }

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < n; j++)
    {
      cout << mat[i][j] << ' ';
    }
    cout << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}