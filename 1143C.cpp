#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    vector<int> adj[n + 1], c(n + 1);
    int root = 0;
    for (int i = 1; i <= n; i++)
    {
        int par, cval;
        cin >> par >> cval;

        if (par == -1)
            root = i;
        else
            adj[par].push_back(i);
        c[i] = cval;
    }

    vector<int> ans;

    function<void(int, int)> dfs = [&](int node, int par)
    {
        int disobey = 0, child = 0;

        for (auto e : adj[node])
        {
            if (e == par)
                continue;

            dfs(e, node);
            if (c[e] == 1)
                disobey++;
            child++;
        }

        if (child == disobey && c[node] == 1)
            ans.push_back(node);
    };

    dfs(root, 0);
    if (ans.size() == 0)
    {
        cout << -1;
        return;
    }

    sort(begin(ans), end(ans));

    for (auto i : ans)
        cout << i << " ";
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