#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;

    if(n == 1){
        cout<<"0";
        return;
    }

    vector<int> adj[n + 1], indegree(n + 1, 0);

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);

        indegree[u]++;
        indegree[v]++;
    }

    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == 1)
            q.push(i);
    }

    int deletednode = 0;
    while (k-- && !q.empty())
    {
        int sz = q.size();
        if (sz == 0)
            break;

        for (int i = 0; i < sz; i++)
        {
            int node = q.front();
            q.pop();

            indegree[node] = 0;
            for (auto e : adj[node])
            {
                if (indegree[e] > 0)
                {
                    indegree[e]--;
                    if (indegree[e] == 1)
                        q.push(e);
                }
            }

            deletednode++;
        }
    }

    cout << n - deletednode;
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