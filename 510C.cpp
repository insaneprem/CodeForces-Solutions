#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
vector<int> adj[26];
vector<int> vis(26, 0);
vector<int> ans;
void dfs(int node)
{
    vis[node] = 1;

    for (auto e : adj[node])
    {
        if (vis[e] == 1)
        {
            cout << "Impossible";
            exit(0);
        }
        if (vis[e] == 0)
        {
            dfs(e);
        }
    }

    vis[node] = 2;
    ans.push_back(node);
}
void solve()
{
    int n;
    cin >> n;
    vector<string> str(n);
    for (auto &i : str)
        cin >> i;

    for (int i = 1; i < n; i++)
    {
        int j = 0;
        while (j < min(str[i - 1].size(), str[i].size()) && str[i - 1][j] == str[i][j])
            j++;
        if (j == str[i].size())
        {
            cout << "Impossible";
            exit(0);
        }
        if (j < str[i - 1].size())
            adj[str[i - 1][j] - 'a'].push_back(str[i][j] - 'a');
    }

    for (int i = 0; i < 26; i++)
        if (!vis[i])
            dfs(i);

    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++) cout<<char(ans[i]+'a');
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