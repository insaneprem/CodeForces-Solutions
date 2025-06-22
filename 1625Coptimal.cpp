#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, l, k;
    cin >> n >> l >> k;

    vector<int> point(n), limit(n);
    for (auto &i : point)
        cin >> i;
    for (auto &i : limit)
        cin >> i;

    point.push_back(l);
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, LLONG_MAX));

    for (auto &i : dp[n])
        i = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int rem = 0; rem <= k; rem++)
        {
            for (int p = 1; p <= n - i && p - 1 <= rem; p++)
            {
                int dist = (point[i + p] - point[i]) * limit[i];
                dp[i][rem] = min(dp[i][rem], dp[i + p][rem - (p - 1)] + dist);
            }
        }
    }

    cout << dp[0][k];
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    // cin>>t;
    t = 1;
    while (t--)
        solve();
}