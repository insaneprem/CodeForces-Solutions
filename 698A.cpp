#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    vector<vector<int>> dp(n + 1, vector<int>(3, 0));

    for (int i = n - 1; i >= 0; i--)
    {
        for (int prev = 0; prev <= 2; prev++)
        {
            dp[i][prev] = 1 + dp[i + 1][0];

            if ((arr[i] == 1 || arr[i] == 3) && prev != 1)
            {
                dp[i][prev] = min(dp[i][prev], dp[i + 1][1]);
            }

            if ((arr[i] == 2 || arr[i] == 3) && prev != 2)
            {
                dp[i][prev] = min(dp[i][prev], dp[i + 1][2]);
            }
        }
    }

    cout << dp[0][0];
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