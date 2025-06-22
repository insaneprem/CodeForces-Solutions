#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, d;
    cin >> n >> d;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    sort(begin(arr), end(arr));

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int idx = upper_bound(begin(arr) + i, end(arr), arr[i] + d) - begin(arr) - 1;
        int ele = idx - i;

        if (ele > 1)
            ans += (ele) * (ele - 1) / 2;
    }

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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}