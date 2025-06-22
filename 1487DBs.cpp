#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    int l = -1, r = 1e5;
    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        int a = (mid * 2) - 1;
        int b = (a * a) / 2;
        int c = b + 1;

        (c <= n) ? l = mid : r = mid;
    }

    cout << l - 1 << "\n";
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
    // t=1;
    while (t--)
        solve();
}