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

    partial_sum(begin(arr), end(arr), begin(arr));

    int ans = 0;

    for (int i = 0.; i < n - 1; i++)
        ans += (2 * arr[i] == arr[n - 1]);

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
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}