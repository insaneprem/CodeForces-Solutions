#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int ans = (n * (n + 1)) / 2, need = 0;

    for (int i = n - 1; i > 0; i--)
    {
        if (str[i] == '1' && need + 1 <= i)
            ans -= (i + 1), need++;
        else
            need = max(need - 1, 0LL);
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}