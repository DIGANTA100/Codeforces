#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    stack<char> st;

    for (auto e : s)
    {
        if (e == '(')
        {
            st.push(e);
        }

        else
        {
            if (st.empty())
                cnt++;

            else
            {
                st.pop();
            }
        }
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