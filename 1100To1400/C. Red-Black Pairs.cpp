#include <bits/stdc++.h>
 
using namespace std;

#define int long long

const int INF = 1'000'000'007;

void solve(){
  int n;
  cin >> n;
  vector<string> d(2);
  cin >> d[0] >> d[1];

  vector<int> dp(n + 1, INF);
  dp[0] = 0;
  for (int i = 0; i < n; i++){
    dp[i + 1] = min(dp[i + 1], dp[i] + (d[0][i] != d[1][i]));
    if (i + 1 < n){
      dp[i + 2] = min(dp[i + 2], dp[i] + (d[0][i] != d[0][i + 1]) + (d[1][i] != d[1][i + 1]));
    }
  }

  cout << dp[n] << '\n';
}
 
signed main()
{
#ifdef FELIX
	auto _clock_start = chrono::high_resolution_clock::now();
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
 
#ifdef FELIX
	cerr << "Executed in " << chrono::duration_cast<chrono::milliseconds>(
		chrono::high_resolution_clock::now()
			- _clock_start).count() << "ms." << endl;
#endif
	return 0;
}