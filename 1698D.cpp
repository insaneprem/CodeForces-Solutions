#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int query(int l, int r)
{
    int cnt = 0;

    cout << "? " << l << " " << r << endl;
    fflush(stdout);

    for (int i = l; i <= r; i++)
    {
        int val;
        cin >> val;
        if (val >= l && val <= r)
            cnt++;
    }

    return cnt;
}
void solve()
{
    int n;
    cin >> n;

    int l = 1, r = n;
    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        (query(l, mid) % 2 == 1) ? r = mid : l = mid;
    }

    bool flag = (query(l, l) == l);
    cout << "! " << (flag ? l : r) << endl;
    cout.flush();
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int t;
    cin >> t;
    // t=1;
    while (t--)
        solve();
}