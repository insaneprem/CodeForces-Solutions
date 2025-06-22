#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, p, q, r;
    cin >> n >> p >> q >> r;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    const int inf = -9e18;
    int best1 = inf, best2 = inf, best3 = inf;

    for (int i = 0; i < n; i++)
    {
        best1 = max(best1, p * arr[i]);
        best2 = max(best2, best1 + q * arr[i]);
        best3 = max(best3, best2 + r * arr[i]);
    }

    cout << best3;
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