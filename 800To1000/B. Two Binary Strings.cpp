#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int tc = 0; tc < t; ++tc) {
        string a, b;
        cin >> a >> b;
        bool ok = false;
        for (int i = 0; i + 1 < a.size(); ++i) {
            if (a[i] == b[i] && a[i] == '0' && a[i + 1] == b[i + 1] && a[i + 1] == '1') {
                ok = true;
            }
        }
        
        if (ok) 
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}