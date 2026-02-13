#include <bits/stdc++.h>
using namespace std;



int main()
{
    int s, n;
    cin >> s >> n;
    pair<int, vector<int>> p[n];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p[i].first = b;
        p[i].second = {a, 0};
    }

    sort(p, p + n);
    reverse(p, p + n);

    bool f = true;
    int cnt = 0;
    while (cnt != n)
    {
        bool def = false;
        for (int i = 0; i < n; i++)
        {
            if (p[i].second[1] == 0 and p[i].second[0] < s)
            {
                s += p[i].first;
                def = true;
                p[i].second[1] =1;
                break;
            }
        }

        if (!def)
            break;
        cnt++;
    }

    if(cnt !=n) f=false;

    if (f)
        cout << "YES";
    else
        cout << "NO";
}
