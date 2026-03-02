#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;

    for (auto &e : s)
    {
        if (st.empty())
            st.push(e);
        else
        {
            if (st.top() == e)
                st.pop();
            else
                st.push(e);
        }
    }
    if (st.empty())
        cout << "YES";
    else
        cout << "NO";
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