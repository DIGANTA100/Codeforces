#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int &e : v)
        cin >> e;

    if (k == 2)
    {
        bool haseven = false;
        for (auto e : v)
        {
            if (e % 2 == 0)
            {
                haseven = true;
                break;
            }
        }

        if (haseven)
            cout << 0;
        else
            cout << 1;
    }

    else if (k == 4)
    {
        int cnt = 0;
        int mn=1000000;
        for (auto e : v)
        {

            if(e%k==0)
            mn=0;
            mn = min(mn, k - (e % k));

            if (e % 2 == 0)
            {

                cnt++;
            }

            if(e%4==0)
            cnt+=10;
        }

        if (cnt >= 2)
            cout << 0;
       
           else  if(mn>=0)
            cout<<min(2-cnt,mn);
            else 
            cout<<2-cnt;

    }

    else
    {
        int mn = 1000000000;

        for (int &e : v)
        {
            if(e%k==0)
            mn=0;
            mn = min(mn, k - (e % k));
        }

        cout << mn;
    }
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
