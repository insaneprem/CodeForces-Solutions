#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    int maxi = 0;
    map<int, int> cnt;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        cnt[val]++;
        maxi = max(maxi, val);
    }

    vector<int> dp(maxi + 1, 0);
    dp[1] = cnt[1];

    for (int i = 2; i <= maxi; i++)
    {
        dp[i] = max(dp[i - 1], cnt[i] * i + dp[i - 2]);
    }

    cout << dp[maxi];
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