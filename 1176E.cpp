#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<int> q;
    vector<int> color(n + 1, -1);
    q.push(1);
    color[1] = 1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (auto e : adj[node])
        {
            if (color[e] == -1)
            {
                color[e] = !color[node];
                q.push(e);
            }
        }
    }

    int cnt = count(color.begin(), color.end(), 1);
    int cnt2 = count(color.begin(), color.end(), 0);
    if (cnt < cnt2)
    {
        cout << cnt << "\n";
        for (int i = 1; i <= n; i++)
        {

            if (color[i] == 1)
                cout << i << " ";
        }
    }
    else
    {
        cout << cnt2 << " ";
        for (int i = 1; i <= n; i++)
        {

            if (color[i] == 0)
                cout << i << " ";
        }
    }
}

signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    cin>>t;
    while(t--) {
        solve();
        cout<<"\n";
    }
}