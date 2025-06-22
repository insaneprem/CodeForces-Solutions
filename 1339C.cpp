#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (auto &i : arr)
        cin >> i;

    int max_diff = 0, curr_max = arr[0];

    for (int i = 1; i < n; i++)
    {
        max_diff = max(max_diff, curr_max - arr[i]);
        curr_max = max(curr_max, arr[i]);
    }

    int time = 0, p = 0;
    while (max_diff > 0)
    {
        max_diff -= (1 << p);
        p++;
        time++;
    }
    cout << time << "\n";
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