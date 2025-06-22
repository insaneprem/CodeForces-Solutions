#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int num;
    cin >> num;

    int ans = 0;
    while (num % 6 == 0)
        ans++, num /= 6;
    while (num % 3 == 0)
        ans += 2, num /= 3;

    if (num != 1)
    {
        cout << -1 << "\n";
        return;
    }

    cout << ans << "\n";
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}