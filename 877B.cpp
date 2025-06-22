#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin >> str;

    int n = str.size();
    vector<int> prefixa(n, 0), prefixb(n, 0);

    for (int i = 0; i < n; i++)
    {
        prefixa[i + 1] = prefixa[i] + (str[i] == 'a');
        prefixb[i + 1] = prefixb[i] + (str[i] == 'b');
    }

    int ans = 0;

    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int a1 = prefixa[i];
            int b2 = prefixb[j] - prefixb[i];
            int a3 = prefixa[n] - prefixa[j];
            ans = max(ans, a1 + b2 + a3);
        }
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}