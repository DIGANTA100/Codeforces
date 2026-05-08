#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int tc;
    cin >> tc;
    while (tc--){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());
        cout << s << '\n';
    }
}