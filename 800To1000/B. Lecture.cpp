#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    map<string, string> mp;
    while (m--)
    {
        string a, b;
        cin >> a >> b;

        mp[a] = b;
    }

    string str[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        str[i] = s;
    }

    for (int i = 0; i < n; i++)
    {
        string s = str[i];
        if (mp[s].length() < s.length())
            cout << mp[s] << ' ';
        else
            cout << s << ' ';
    }
}
