#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int cnt = 0;
    long long mx = 0;
    long long sum = 0;
    vector<int> v(n);
    for (auto &e : v)
        cin >> e;

    for (int i = 0; i < n; i++)
    {   long long tempmax;
        if (v[i] > mx)
        {
            sum += mx;
            mx = v[i];
        }
        else
        sum+=v[i];

        if (mx == sum)
            cnt++;


    }

    cout<<cnt;
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
