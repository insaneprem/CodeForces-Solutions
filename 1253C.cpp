#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    sort(arr.begin(), arr.end());
    vector<int> prefixsum(n);

    partial_sum(arr.begin(), arr.end(), prefixsum.begin());

    prefixsum.insert(prefixsum.begin(), 0);

    vector<int> dp(n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (i <= m)
            dp[i] = prefixsum[i];
        else
            dp[i] = dp[i - m] + prefixsum[i];
    }

    for (int i = 1; i <= n; i++)
        cout << dp[i] << " ";
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