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

    vector<pair<int, int>> ans;

    for (int i = 0; i < n; i++)
        if (arr[i] < i + 1)
            ans.push_back({arr[i], i + 1});

    sort(ans.begin(), ans.end());

    int cnt = 0;
    for (auto i : ans)
    {
        auto ind = upper_bound(ans.begin(), ans.end(), make_pair(i.second, LLONG_MAX));
        if (ind == ans.end())
            continue;
        else
        {
            int idx = ind - ans.begin();
            cnt += ans.size() - idx;
        }
    }
    cout << cnt << "\n";
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