#include <bits/stdc++.h>
using namespace std;

void solve(){
int n, m;
    cin >> n >> m;

    if (m % n != 0)
    {
        cout << -1;
        return ;
    }

    m /= n;
    n = m;

    int cnt = 0;
    bool f = true;
    int num = n;

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            cnt++;
            n /= 2;
        }
        else if (n % 3 == 0)
        {
            cnt++;
            n /= 3;
        }
        else
        {
            f = false;
            break;
        }
    }

    if (f)
    {
        cout << cnt;
        return ;
    }

    cout << -1;


}

int main()
{

    solve();
}