#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int N = 37, K = 57, inf = 1e9;
int dp[N][N][K];
void fill_dp()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int l = 0; l < K; l++)
            {
                if (l > i * j)
                {
                    dp[i][j][l] = inf;
                    continue;
                }
                if (l == 0 || l == i * j)
                {
                    dp[i][j][l] = 0;
                    continue;
                }

                dp[i][j][l] = inf;

                for (int i1 = 1; i1 < i; i1++)
                {
                    for (int l1 = 0; l1 <= l; l1++)
                    {
                        dp[i][j][l] = min(dp[i][j][l], dp[i1][j][l1] + dp[i - i1][j][l - l1] + j * j);
                    }
                }

                for (int j1 = 1; j1 < j; j1++)
                {
                    for (int l1 = 0; l1 <= l; l1++)
                    {
                        dp[i][j][l] = min(dp[i][j][l], dp[i][j1][l1] + dp[i][j - j1][l - l1] + i * i);
                    }
                }
            }
        }
    }
}
void solve()
{

    int n, m, k;
    cin >> n >> m >> k;

    cout << dp[n][m][k];
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
    fill_dp();
    while (t--)
    {
        solve();
        cout << "\n";
    }
}