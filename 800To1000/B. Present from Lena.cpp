#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j <= i)
            {

                if (j != 2 * i)
                    cout << j << ' ';
                else
                    cout << j;
            }
            else
            {
                if (j != 2 * i)
                    cout << 2 * i - j << ' ';
                else
                    cout << 2 * i - j;
            }
        }

        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j <= n - i; j++)
            cout << "  ";
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j <= i)
            {

                if (j != 2 * i)
                    cout << j << ' ';
                else
                    cout << j;
            }
            else
            {
                if (j != 2 * i)
                    cout << 2 * i - j << ' ';
                else
                    cout << 2 * i - j;
            }
        }

        cout << endl;
    }
}