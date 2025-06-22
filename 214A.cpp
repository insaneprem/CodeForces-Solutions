#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m, ans = 0;
    cin >> n >> m;

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            ans += ((i * i + j == n) && (j * j + i == m));

    cout << ans;
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