#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string a, b;
  cin >> a >> b;

  int mx = -100;

  for (int i = 0; i < a.size(); i++)
  {

    for (int j = 0; j < b.size(); j++)
    {
      int len = 0;
      if (a[i] == b[j])
      {
        len++;
        int k = i + 1, l = j + 1;
        for (; k < a.size() and l < b.size();)
        {
          if (a[k] == b[l])
          {
            len++;
          }
          else
            break;

            k++;
            l++;
        }
      }

      mx = max(mx, len);
    }
  }

  cout << a.size() + b.size() - 2 * mx;
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