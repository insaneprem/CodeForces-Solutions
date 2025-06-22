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

    vector<string> str(n), rstr(n);

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;

        str[i] = temp;
        reverse(begin(temp), end(temp));
        rstr[i] = temp;
    }

    const int inf = 1e18;

    vector<vector<int>> dp(n, vector<int>(2, inf));
    dp[0][0] = 0;
    dp[0][1] = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (str[i - 1] <= str[i])
            dp[i][0] = min(dp[i][0], dp[i - 1][0]);
        if (rstr[i - 1] <= str[i])
            dp[i][0] = min(dp[i][0], dp[i - 1][1]);
        if (str[i - 1] <= rstr[i])
            dp[i][1] = min(dp[i][1], dp[i - 1][0] + arr[i]);
        if (rstr[i - 1] <= rstr[i])
            dp[i][1] = min(dp[i][1], dp[i - 1][1] + arr[i]);
    }

    int ans = min(dp[n - 1][0], dp[n - 1][1]);
    cout << ((ans == inf) ? -1 : ans);
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