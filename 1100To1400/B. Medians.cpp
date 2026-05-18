#include <bits/stdc++.h>
using namespace std;



namespace solution {
    bool hasMultipleTests = true;

    int n, k;

    void preprocess() {

    }

    void input(int testcase) {
        cin >> n >> k;
    }

    void solve(int testcase) {
        if (n == 1) {cout << "1\n1\n"; return;}

        if (k == 1 || k == n) {cout << "-1\n"; return;}

        int p2 = k - k % 2;
        int p3 = k + 1 + k % 2;
        cout << "3\n1 " << p2 << " " << p3 << endl;
    }
}

int main() {


    solution::preprocess();

    int t = 1;
    if (solution::hasMultipleTests) cin >> t;

    for (int testcase=1; testcase<=t; testcase++) {
        solution::input(testcase);
        solution::solve(testcase);
    }

    return 0;
}