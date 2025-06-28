#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> adj[n + 1];

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> depth(n + 1, -1), subtree(n + 1, 0), arr(n);
    iota(begin(arr), end(arr), 1);

    function<void(int, int)> dfs = [&](int node, int par)
    {
        depth[node] = 1 + depth[par];

        for (auto e : adj[node])
        {
            if (e == par)
                continue;

            dfs(e, node);
            subtree[node] += 1 + subtree[e];
        }
    };

    dfs(1, 0);

    sort(begin(arr), end(arr), [&](auto a, auto b)
         { return depth[a] - subtree[a] > depth[b] - subtree[b]; });

    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += depth[arr[i]] - subtree[arr[i]];
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}