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

    sort(arr.begin(), arr.end());
    int tsum = accumulate(arr.begin(), arr.end(), 0LL);

    int q;
    cin >> q;

    while (q--)
    {
        int def, att;
        cin >> def >> att;

        int ind = lower_bound(arr.begin(), arr.end(), def) - arr.begin();

        int ans = 2e18;

        if (ind > 0)
            ans = min(ans, (def - arr[ind - 1]) + max(0LL, att - tsum + arr[ind - 1]));
        if (ind < n)
            ans = min(ans, max(0LL, att - tsum + arr[ind]));

        cout << ans << "\n";
    }
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