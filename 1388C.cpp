#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1], subtree(n + 1), happy(n + 1), happiness(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> subtree[i];
    for (int i = 1; i <= n; i++)
        cin >> happiness[i];

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool ispossible = 1;
    function<void(int, int)> dfs = [&](int node, int par)
    {
        int happichildren = 0;

        for (auto e : adj[node])
        {
            if (e == par)
                continue;

            dfs(e, node);
            subtree[node] += subtree[e];
            happichildren += happy[e];
        }

        if ((subtree[node] + happiness[node]) % 2 != 0)
            ispossible = 0;

        happy[node] = (subtree[node] + happiness[node]) / 2;

        ispossible &= (happy[node] <= subtree[node]) && (happy[node] >= happichildren);
    };

    dfs(1, 0);

    cout << (ispossible ? "YES" : "NO");
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