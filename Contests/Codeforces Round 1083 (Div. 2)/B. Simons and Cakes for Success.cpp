#include <bits/stdc++.h>
using namespace std;
bool isprime(long long n)
{

    if (n <= 1)
        return false;

    if (n <= 3)
        return true;

    if (n % 2 == 0 or n % 3 == 0)
        return false;

    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    long long n;
    cin >> n;
    unordered_set<long long> st;

    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (isprime(i))
            {
                st.insert(i);
            }
            if (isprime(n / i))
                st.insert(n / i);
        }
    }

    long long res = 1;
    for (auto it = st.begin(); it != st.end(); it++)
    {
        res *= *it;
    }

    cout << res;
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