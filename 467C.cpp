#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    partial_sum(begin(arr), end(arr), begin(arr));

    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            dp[i][j] = dp[i - 1][j];

            if (i >= m && j >= 1)
                dp[i][j] = max(dp[i][j], dp[i - m][j - 1] + arr[i] - arr[i - m]);
        }
    }

    cout << dp[n][k];
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}