#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    int sz = (n * (n - 1)) / 2;
    vector<int> arr(sz);

    for (auto &i : arr) cin >> i;

    sort(begin(arr), end(arr));

    for (int i = 0; i < sz; i += --n) cout << arr[i] << " ";

    cout << 1000000000;
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