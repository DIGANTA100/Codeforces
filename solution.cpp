#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;

    cin >> n;

    vector<int> cv(n + 1);

    vector<int> pv(n + 1);


for (int i = 1; i <= n; i++)
        cin >>cv[i]>>pv[i];

         deque<pair<int, int>> tt;

    for (int i = 1;i <= n;i++)

        tt.push_back({cv[i],pv[i]});

    vector<int> carr(n + 1);
    vector<int>    parr(n + 1);

    int id = 1;
    while (!tt.empty())
    {
        carr[id] = tt.front().first;

     parr[id] = tt.front().second;
            tt.pop_front();
        id++;
    }

    map<int, bool> cons;
    for (int i = 1; i <= n; i++)
    
        cons[i] = false;

    
    double penalm = 0.0;

 double obt = 0.0;

double mxx = 0.0;
    double flag = 0.0;

    for (int i = n; i >= 1; i--)
    {
        penalm =(double) parr[i]/100.0;
        obt=(double)  carr[i];
        mxx = flag * penalm;

        if (parr[i] == 0 || obt >= mxx)
        {
            cons[i] = true;
            flag = obt + (1.0 - penalm) * flag;
        }
    }

    cout << fixed << setprecision(10) << flag << endl;
}

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        solve();
        cout << "";
    }
}