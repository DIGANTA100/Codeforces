#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> mp;

    while (n--)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    string res;

    auto it = mp.begin();
    int x = it->second;
    res = it->first;

    auto it2 = ++it;
    if (it2 != mp.end() and it2->second > x)
        res = it2->first;

    cout << res;
}
