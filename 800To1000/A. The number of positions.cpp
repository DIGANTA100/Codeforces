#include <bits/stdc++.h>
using namespace std;
void solve()
{
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int posi = a + 1, posj = n - b;

    if (posj >= posi)
    {

        cout << n - posj + 1;
    }
    else
        cout << n - posi + 1;
}
