#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, q;
    cin >> n >> k >> q;
    queue<int> que;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
        if (x > q)
            que.push(i);
    }
    // queue<int> t=que;
    // cout<<endl;
    // while(!t.empty()){
    //     cout<<t.front()<<' ';
    //     t.pop();

    // }

    // cout<<endl;
    long long curpos = 0;
    long long sum = 0;
    long long ele;

    while (!que.empty())

    {

        ele = que.front() - curpos;
        if (ele >= k)
        {
            long long npos = ele - k + 1;
            sum += (npos * (npos + 1)) / 2;
        }
        curpos = que.front() + 1;
        que.pop();
    }

    ele = n  - curpos;

    if (ele >= k)
    {
        long long  npos = ele - k + 1;
        sum += (npos * (npos + 1)) / 2;
    }

    cout << sum;
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
