#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    map<int, int> mpp;
    for (auto &i : arr)
    {
        cin >> i;
        mpp[(i ^ x)]++;
    }

    int ans = 0;

    for (auto i : arr)
    {
        ans += mpp[i ^ x];
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}