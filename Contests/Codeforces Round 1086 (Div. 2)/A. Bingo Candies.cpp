#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    
    cin >> n;

    map<int, int> freq;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;j < n; j++)
        {
            int x;

            cin >> x;
            freq[x]++;
        }
    }

    int bad = n * n - n + 1;
    for (auto p : freq)
    {


        if (p.second >= bad)


        {
            cout << "NO";
            return;
        }
    }

    cout <<"YES";
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