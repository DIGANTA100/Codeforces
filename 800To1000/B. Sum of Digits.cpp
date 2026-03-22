#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    while (s.size() > 1)
    {
        cnt++;
        int sum = 0;
        for (auto &e : s)
        {
            sum += e - '0';
        }

        s = to_string(sum);
    }

    cout << cnt;
}