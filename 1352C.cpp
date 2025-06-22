#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int check(int val, int n)
{
    return val - (val / n);
}
void solve()
{
    int n, k;
    cin >> n >> k;

    int l = 0, r = 2e18;

    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        (check(mid, n) < k) ? l = mid : r = mid;
    }

    cout << (r % n == 0 ? l : r) << "\n";
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