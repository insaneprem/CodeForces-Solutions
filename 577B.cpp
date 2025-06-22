#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin>>n>>m;
    int arr[n + 7];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] = arr[i] % m;
    }

    if (n >= m)
    {
        cout << "YES"; // Pigeon Hole
        return;
    }

    bool dp[n + 1][m + 1] = {};

    for (int i = 1; i <= n; i++)
    {
        dp[i][arr[i]] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (dp[i][j])
                continue;

            dp[i][j] = dp[i - 1][j];

            dp[i][j] = dp[i][j] | dp[i - 1][(j - arr[i] + m) % m];
        }
    }

    cout << (dp[n][0] ? "YES" : "NO");
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