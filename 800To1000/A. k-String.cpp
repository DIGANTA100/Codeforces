#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	cin >> k;

	string s;
	cin >> s;

	if (s.length() % k != 0)
	{
		cout << -1;
		return 0;
	}

	unordered_map<char, int> m;

	for (auto e : s)
	{
		m[e]++;
	}

	bool f = true;

	for (auto it = m.begin(); it != m.end(); it++)
	{
		if (it->second % k != 0)
		{
			f = false;
			break;
		}
	}

	if (f)
	{

		string res;

		for (auto it = m.begin(); it != m.end(); it++)
		{
			int cnt = it->second / k;
			for (int i = 0; i < cnt; i++)
				res.push_back(it->first);
		}

		string actres;
		while (k--)
		{
			actres += res;
		}

		cout << actres;
	}

	else
		cout << -1;
}
