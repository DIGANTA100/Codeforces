#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{

    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (long long i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

long long nextPrime(long long x)
{

    if (isPrime(x))
        return x;

    long long i = x + 1;
    while (true)
    {
        if (isPrime(i))
            return i;
        i++;
    }
}

void solve()
{
    long long d;
    cin >> d;
    long long res = 1;
    long long got = 1 + d;

    for (int i = 1; i <= 2; i++)
    {

        got = nextPrime(got);
        res *= got;
        got += d;
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
