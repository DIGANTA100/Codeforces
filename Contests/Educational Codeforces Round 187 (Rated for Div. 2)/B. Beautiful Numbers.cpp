#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    vector<pair<int,int>> v;

    for (int i = 0; i < s.size(); i++)
    {
        v.push_back({s[i] - '0', i});
    }

    int sum = 0;
    for (int i = 0; i < v.size(); i++)
        sum += v[i].first;

    if (sum <= 9)
    {
        cout << 0;
        return;
    }

    
    vector<int> rathernot;

    for (int i = 0; i < v.size(); i++)
    {
        int d = v[i].first;

        if (v[i].second == 0)
        {
            
            rathernot.push_back(d - 1);
        }
        else
        {
            rathernot.push_back(d);
        }
    }

    
    sort(rathernot.begin(), rathernot.end());
    reverse(rathernot.begin(),rathernot.end());
   int cur = sum;
    int moves = 0;


 

    for (int i = 0; i < rathernot.size(); i++)
    {
        cur -= rathernot[i];
        moves++;

        if (cur <= 9)
            break;
    }

    cout << moves;
    return;
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