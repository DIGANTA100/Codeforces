#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, n, S;
    cin >> a >> b >> n >> S;
    if(n==1 and a+b>=S){
        cout<<"YES";
        return;
    }


    if (S / n <= a)
    {

        long long rem = S % n;

        if (rem <= b)
        {

            cout << "YES";
            return;
        }

        else
        {
            cout << "NO";
            return;
        }
    }

    else if (S <= b)
    {
        cout << "YES";
        return;
    }

    else
    {
        cout << "NO";
        return;
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