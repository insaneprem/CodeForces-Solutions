#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    sort(begin(arr), end(arr));

    int ans;

    if (k == 0)
        ans = arr[0] - 1;
    else
        ans = arr[k - 1];

    int cnt = 0;
    for (auto i : arr)
        cnt += (i <= ans);

    if (cnt <= k && (1 <= ans) && (ans <= 1e9))
        cout << ans;
    else
        cout << -1;
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