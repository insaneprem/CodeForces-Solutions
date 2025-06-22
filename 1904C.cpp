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

    if (k >= 3)
    {
        cout << 0;
        return;
    }

    sort(begin(arr), end(arr));

    int diff = arr[0];

    for (int i = 0; i < n - 1; i++)
        diff = min(diff, abs(arr[i] - arr[i + 1]));

    if (k == 1)
    {
        cout << diff;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int val = abs(arr[i] - arr[j]);

            int idx = lower_bound(begin(arr), end(arr), val) - arr.begin();

            if (idx > 0)
                diff = min(diff, abs(val - arr[idx - 1]));
            if (idx < n)
                diff = min(diff, abs(val - arr[idx]));
        }
    }

    cout<<diff;
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