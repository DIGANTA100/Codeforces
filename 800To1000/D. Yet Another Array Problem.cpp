#include <bits/stdc++.h>
using namespace std;

int main()
{
   

    vector<long long> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
                                 31, 37, 41, 43, 47, 53};

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        for (long long p : primes)
        {
            bool ok = false;
            for (long long ai : a)
            {
                if (ai % p != 0)
                {
                    ok = true;
                    break;
                }
            }
            if (ok)
            {
                cout << p << "\n";
                break;
            }
        }
    }
}