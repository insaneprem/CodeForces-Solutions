#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin >> str;

    vector<vector<int>> dp(str.size() + 1, vector<int>(26, 0));

    for (int i = 1; i <= str.size(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            dp[i][j] = dp[i - 1][j];
        }
        dp[i][str[i - 1] - 'a']++;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int cnt = 0;
        for (int i = 0; i < 26; i++)
            if (dp[r][i] - dp[l - 1][i] > 0)
                cnt++;

        if (cnt >= 3 || str[r - 1] != str[l - 1] || l == r)
        {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
    }
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