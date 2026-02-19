#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int sum = 0;

    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            if ((i <= n and x / i <= n) and i==x/i)
                sum += 1;
                else if(i <= n and x / i <= n)
                sum+=2;
        }
    }

    cout << sum;
}
