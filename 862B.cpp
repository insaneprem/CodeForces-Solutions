#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void dfs(int node, vector<int> adj[], vector<int> &color)
{
    for (auto e : adj[node])
    {
        if (color[e] == 0)
        {
            color[e] = color[node] == 1 ? 2 : 1;
            dfs(e, adj, color);
        }
    }
}
void solve()
{
    int n;
    cin >> n;

    vector<int> adj[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> color(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!color[i])
        {
            dfs(i, adj, color);
        }
    }

    int a = count(color.begin(), color.end(), 1);
    int b = count(color.begin(), color.end(), 2);

    cout << (a * b) - (n - 1);
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
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}