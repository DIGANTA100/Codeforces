#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int zeros = 0, fives = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0) zeros++;
        else fives++;
    }

    if (zeros == 0)
    {
        cout << -1;
        return 0;
    }

    fives = (fives / 9) * 9;

    if (fives == 0)
    {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < fives; i++)
        cout << 5;
    for (int i = 0; i < zeros; i++)
        cout << 0;
}