#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;

queue<pair<int, int>> q;
vector<pair<int, int>> adj[300005];
int v[300005];
int res[300005];

int main()
{
    int n, k, d;
    scanf("%d%d%d", &n, &k, &d);
    for (int i = 0; i < k; i++)
    {
        int p;
        scanf("%d", &p);
        q.push({p, 0});
    }
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        scanf("%d%d", &u, &v);
        adj[u].push_back({v, i + 1});
        adj[v].push_back({u, i + 1});
    }
    while (!q.empty())
    {
        int pos = q.front().first;
        int from = q.front().second;
        q.pop();
        if (v[pos])
            continue;
        v[pos] = 1;
        for (int i = 0; i < adj[pos].size(); i++)
            if (adj[pos][i].first != from)
            {
                if (v[adj[pos][i].first])
                    res[adj[pos][i].second] = 1;
                else
                    q.push({adj[pos][i].first, pos});
            }
    }

    int rescnt = 0;
    for (int i = 1; i <= n - 1; i++)
        if (res[i])
            rescnt++;
    printf("%d\n", rescnt);
    for (int i = 1; i <= n - 1; i++)
        if (res[i])
            printf("%d ", i);
    return 0;
}