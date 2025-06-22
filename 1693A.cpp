#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long n;
	cin >> n;
	vector<long long> prefix(n + 1, 0);
	vector<long long> a(n + 1);
	for (long long i = 1; i <= n; i++)
	{
		cin >> a[i];
		prefix[i] = prefix[i - 1] + a[i];
	}

	if (prefix[n] != 0)
	{
		cout << "No" << '\n';
		return;
	}

	bool flag = true;

	for (long long i = 1; i <= n; i++)
		if (prefix[i] < 0)
			flag = false;

	bool visited_zero = 0;
	for (long long i = 1; i <= n; i++)
	{
		if (prefix[i] == 0)
			visited_zero = 1;
		else if (visited_zero)
			flag = 0;
	}

	cout << ((flag) ? "YES" : "NO") << '\n';
}

int main()
{
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long t;
	cin >> t;
	while (t--)
		solve();
}