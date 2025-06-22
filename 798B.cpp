#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

string rotate(string &s, int k)
{
    return s.substr(k) + s.substr(0, k);
}

void solve()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (auto &i : s)
        cin >> i;

    int len = s[0].size();
    const int INF = 1e9;
    vector<vector<int>> dp(n, vector<int>(len, INF));

    for (int j = 0; j < len; j++)
    {
        dp[0][j] = j;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < len; j++)
        {
            string cur_rotated = rotate(s[i], j);
            for (int k = 0; k < len; k++)
            {
                string prev_rotated = rotate(s[i - 1], k);
                if (cur_rotated == prev_rotated)
                {
                    dp[i][j] = min(dp[i][j], dp[i - 1][k] + j);
                }
            }
        }
    }

    int ans = INF;
    for (int j = 0; j < len; j++)
    {
        ans = min(ans, dp[n - 1][j]);
    }

    cout << (ans == INF ? -1 : ans);
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
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}
