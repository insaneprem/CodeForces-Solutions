#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int dfs(int node, int par, vector<int> adj[], vector<int> &iscat, int consecutivecats, int m)
{
    if (consecutivecats > m)
        return 0;
    int isleaf = 1;
    int ans = 0;
    for (auto e : adj[node])
    {
        if (node == par)
            continue;

        isleaf = 0;
        if (iscat[node])
            ans += dfs(e, node, adj, iscat, consecutivecats + 1, m);
        else
            ans += dfs(e, node, adj, iscat, 0, m);
    }

    if (isleaf)
        return 1;

    return ans;
}
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1], iscat(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> iscat[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout<<dfs(1,0,adj,iscat,0,m);
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