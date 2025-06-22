#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool check(int m, int n, vector<vector<int>> mat, int joy)
{
    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (mat[j][i] >= joy)
                arr[i].push_back(j);

        if (arr[i].size() == 0)
            return 0;
    }

    vector<int> vis(m);

    for (auto i : arr)
    {
        for (auto j : i)
        {
            if (vis[j] == 1)
                return 1;
            vis[j] = 1;
        }
    }

    return 0;
}
void solve()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));

    for (auto &i : mat)
        for (auto &j : i)
            cin >> j;

    int l = 0, r = 2e9;

    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        (check(m, n, mat, mid)) ? l = mid : r = mid;
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
    // t=1;
    while (t--)
        solve();
}