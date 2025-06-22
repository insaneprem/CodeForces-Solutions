#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
map<pair<int, int>, int> mpp;

int query(int l, int r)
{
    if (mpp.find({l, r}) != mpp.end())
        return mpp[{l, r}];

    cout << "? " << l << " " << r << endl;
    fflush(stdout);
    int val;
    cin >> val;
    return mpp[{l, r}] = val;
}
void solve()
{
    int n, t, k;
    cin >> n >> t >> k;

    int l = 0, r = n + 1;
    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        (mid - query(1, mid) >= k) ? r = mid : l = mid;
    }
    cout << "! " << min(n, r) << " ";
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
    // cin>>t;
    t = 1;
    while (t--)
        solve();
}