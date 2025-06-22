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

    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(k + 1, vector<int>(n + 1, LLONG_MAX)));

    for (int i = n; i >= 0; i--)
    {
        for (int rem = 0; rem <= k; rem++)
        {
            for (int prev = 0; prev <= i; prev++)
            {
                if (i == n)
                {
                    dp[i][rem][prev] = 0;
                }
                else
                {
                    int op1 = LLONG_MAX, op2 = LLONG_MAX;

                    if (rem > 0)
                    {
                        int dist = (i == n - 1) ? (l - point[i]) : (point[i + 1] - point[i]);
                        op1 = dp[i + 1][rem - 1][prev] + dist * limit[prev];
                    }

                    int dist = (i == n - 1) ? (l - point[i]) : (point[i + 1] - point[i]);
                    op2 = dp[i + 1][rem][i] + dist * limit[i];

                    dp[i][rem][prev] = min(op1, op2);
                }
            }
        }
    }

    cout << dp[0][k][0] << endl;
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