#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cin >> m;

    while (m--) {
        string s;
        cin >> s;

        if ((int)s.size() != n) {
            cout << "NO\n";
            continue;
        }

        unordered_map<int, char> intmap;   
        unordered_map<char, int> charmap;  

        bool f = true;

        for (int i = 0; i < n; i++) {
            bool hasInt  = intmap.count(v[i]);
            bool hasChar = charmap.count(s[i]);

            if (!hasInt && !hasChar) {
              
                intmap[v[i]]  = s[i];
                charmap[s[i]] = v[i];
            }
            else if (hasInt && hasChar) {
               
                if (intmap[v[i]] != s[i] || charmap[s[i]] != v[i]) {
                    f = false;
                    break;
                }
            }
            else {
              
                f = false;
                break;
            }
        }

        cout << (f ? "YES" : "NO") << "\n";
    }
}

int main() {
  
    int t;
    cin >> t;
    while (t--)
        solve();
}