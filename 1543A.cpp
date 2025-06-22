#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << " " << 0 << "\n";
        return;
    }

    cout << (abs(a - b)) << " " << min(a % (abs(a - b)), abs(a - b) - (a % (abs(a - b)))) << '\n';
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