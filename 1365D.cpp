#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long long
vector<int> h = {1, -1, 0, 0};
vector<int> v = {0, 0, 1, -1};

bool isvalid(int i, int j, int n, int m)
{
    return (i >= 1 && i <= n && j >= 1 && j <= m);
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> arr(n + 1, vector<char>(m + 1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == 'B')
            {
                for (int k = 0; k < 4; k++)
                {
                    int dx = i + h[k];
                    int dy = j + v[k];

                    if (isvalid(dx, dy, n, m) && arr[dx][dy] == '.')
                        arr[dx][dy] = '#';
                }
            }
        }
    }

    vector<vector<bool>> vis(n + 1, vector<bool>(m + 1, false));
    queue<pair<int, int>> q;
    if (arr[n][m] != '#')
    {
        vis[n][m] = true;
        q.push({n, m});
    }

    while (!q.empty())
    {
        pair<int, int> curr = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int dx = curr.first + h[i];
            int dy = curr.second + v[i];

            if (isvalid(dx, dy, n, m) && arr[dx][dy] != '#' && !vis[dx][dy])
            {
                vis[dx][dy] = true;
                q.push({dx, dy});
            }
        }
    }

    bool good = true;
    for (int i = 1; i <= n && good; i++)
    {
        for (int j = 1; j <= m && good; j++)
        {
            if (arr[i][j] == 'G' && !vis[i][j])
            {
                good = false;
            }
            if (arr[i][j] == 'B' && vis[i][j])
            {
                good = false;
            }
        }
    }

    cout << (good ? "Yes" : "No") << "\n";
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
