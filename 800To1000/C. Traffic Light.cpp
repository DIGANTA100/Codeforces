#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    char ch;
    cin >> n >> ch;
    string s;
    cin >> s;
    int len = s.size();
    s += s;
    if(ch=='g'){
        cout<<0;
        return;
    }
    int mx = -10000;
    int id = -1;

    bool f = false;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ch and !f)
        {
            id = i;
            f = true;
        }

        else if (f and s[i] == 'g')
        {
            mx = max(mx, i - id);
            f = false;
        }
    }

    cout << mx;
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
