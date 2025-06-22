#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n * k);
    for (auto &i : arr)
        cin >> i;

    int val = n / 2 + 1;
    int sum = 0;
    for (int i = (n * k) - val; k--; i -= val)
        sum += arr[i];

    cout << sum << "\n";
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
    while (t--)
        solve();
}