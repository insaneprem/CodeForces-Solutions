#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    vector<int> prefix(n), suffix(n), arr(n);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr[i] = val;
        prefix[i] = val + i;
        suffix[i] = val - i;
    }

    for (int i = 1; i < n; i++)
        prefix[i] = max(prefix[i - 1], prefix[i]);
    for (int i = n - 2; i >= 0; i--)
        suffix[i] = max(suffix[i + 1], suffix[i]);

    int ans = 0;
    // for(auto i:suffix) cout<<i<<" ";
    for (int i = 1; i < n - 1; i++)
        ans = max(ans, prefix[i - 1] + arr[i] + suffix[i + 1]);

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