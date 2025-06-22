#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int N = 2007, inf = 2e9 + 13;
vector<int> arr;
int dp[N];
int n, k;
bool check(int x)
{
    fill(dp, dp + n, 0);

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (abs(arr[i] - arr[j]) <= (i - j) * x)
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }

    return (n - ans) <= k;
}
void solve()
{
    cin >> n >> k;
    arr.resize(n);

    for (auto &i : arr)
        cin >> i;

    int low = -1, high = inf;

    while (high - low > 1)
    {
        int mid = (low + high) / 2;

        if (check(mid))
            high = mid;
        else
            low = mid;
    }

    cout << high;
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