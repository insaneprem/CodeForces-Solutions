#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin >> str;

    int n = str.size();
    vector<int> dp(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (str[i] == ')' && str[i - 1] == '(')
        {
            dp[i] = (i >= 2 ? dp[i - 2] : 0) + 2;
        }
        else if (str[i] == ')' && str[i - 1] == ')')
        {
            int j = i - dp[i - 1] - 1;
            if (j >= 0 && str[j] == '(')
            {
                dp[i] = dp[i - 1] + 2 + (j >= 1 ? dp[j - 1] : 0);
            }
        }
    }

    int maxi = *max_element(begin(dp), end(dp));
    int cnt = count(begin(dp), end(dp), maxi);

    if (maxi == 0)
        cout << "0 1";
    else
        cout << maxi << " " << cnt;
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