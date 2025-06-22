#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int check(int mid, int k)
{
    if (mid <= k)
    {
        return (mid * (mid + 1)) / 2;
    }
    else
    {
        int num = mid - k;
        int temp = k - num - 1;
        return ((k * (k - 1)) / 2 - (temp * (temp + 1)) / 2) + (k * (k + 1)) / 2;
    }
}

void solve()
{
    int k, x;
    cin >> k >> x;

    int l = 0, r = 2 * k;

    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        (check(mid, k) < x) ? l = mid : r = mid;
    }

    cout << min(2 * k - 1, r) << "\n";
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