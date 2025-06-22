#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int mod = 1e9 + 7;
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> str(n);
    for (auto &i : str)
        cin >> i;

    vector<set<char>> vec(m);
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            vec[j].insert(str[i][j]);
        }
    }

    int ans = 1;

    for (int i = 0; i < m; i++)
    {
        ans = (ans * vec[i].size()) % mod;
    }

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