#include <bits/stdc++.h>
using namespace std;
#define long long int
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		vector<int> freq(n + 1);
		vector<int> ans(n);
		vector<vector<int>> occ(n + 1, vector<int>());
		for (int i = 0; i < n; i++)
		{
			freq[arr[i]]++;
			occ[arr[i]].push_back(i);
		}
		vector<int> toColor;
		for (int i = 1; i <= n; i++)
		{
			if (freq[i] >= k)
			{
				for (int j = 0; j < k; j++)
				{
					ans[occ[i][j]] = j + 1;
				}
			}
			else
			{
				for (int j = 0; j < freq[i]; j++)
				{
					toColor.push_back(occ[i][j]);
				}
			}
		}
		for (int i = 0; i <= toColor.size() - k; i += k)
		{
			for (int j = 0; j < k; j++)
			{
				ans[toColor[i + j]] = j + 1;
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}
