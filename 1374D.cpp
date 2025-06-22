#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val % k != 0)
            mpp[val % k]++;
    }

    int ans = 0;

    for (auto i : mpp)
    {
        // cout<<i.first<<" "<<i.second<<"\n";
        ans = max(ans, (k - i.first) + (i.second - 1) * k);
    }
    if (ans == 0)
        cout << 0 << " ";
    else
        cout << ans + 1 << " ";
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
    cin >> t;
    // t=1;
    while (t--)
        solve();
}