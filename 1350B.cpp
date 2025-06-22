#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
vector<int> fact(int n)
{
    vector<int> ans;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            ans.push_back(n / i);
        }
    }

    return ans;
}
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int ans = 1;
    vector<int> dp(n + 1, 1);
    for (int i = 2; i <= n; i++)
    {
        if (arr[1] < arr[i]) dp[i] = max(dp[i], 2LL);

        vector<int> f = fact(i);

        for (auto j : f) if (arr[j] < arr[i]) dp[i] = max(dp[i], dp[j] + 1);

        ans = max(ans, dp[i]);
    }

    // for(auto i:dp) cout<<i<<" ";

    cout << ans;
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}