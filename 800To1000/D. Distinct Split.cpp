#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    vector<int> v(n);
    for (int i = 0; i < s.size(); i++)
    {
        if (st.find(s[i]) == st.end())
        {
            st.insert(s[i]);
        }

        v[i] = st.size();
    }

    st.clear();

    vector<int> r(n);
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (st.find(s[i]) == st.end())
        {
            st.insert(s[i]);
        }

        r[i] = st.size();
    }
    // for(auto e:v)
    // cout<<e<<' ';
    // cout<<endl;
    
    //     for(auto e:r)
    // cout<<e<<' ';
    // cout<<endl;
    

    int mx = -10000000;
    for (int i = 0; i < n - 1; i++)
    {
        mx = max(v[i]+r[i + 1],mx);
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
