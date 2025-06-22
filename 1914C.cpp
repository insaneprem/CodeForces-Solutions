#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> arr(n);
    for (auto &i : arr)
        cin >> i.first;
    for (auto &i : arr)
        cin >> i.second;

    int maxi = 0, ans = 0, prefixsum = 0;

    for (int i = 1; i <= min(n, k); i++)
    {
        maxi = max(maxi, arr[i - 1].second);
        prefixsum += arr[i - 1].first;

        ans = max(ans, prefixsum + (k - i) * maxi);
    }

    cout << ans << '\n';
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