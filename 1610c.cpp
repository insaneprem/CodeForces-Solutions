#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(vector<pair<int, int>> &arr, int mid)
{
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int poor = cnt, rich = mid - 1 - cnt;
        if (arr[i].first >= rich && arr[i].second >= poor)
            cnt++;
    }

    return cnt >= mid;
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (auto &i : arr)
        cin >> i.first >> i.second;

    int l = 0, r = 1e6;
    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        (check(arr, mid)) ? l = mid : r = mid;
    }

    cout << l << "\n";
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