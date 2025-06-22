#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int n;
map<pair<int, int>, int> mpp;
int query(int l, int r)
{
    if (mpp.find({l, r}) != mpp.end())
        return mpp[{l, r}];
    cout << "? " << l << " " << r << endl;

    cout.flush();
    int val;
    cin >> val;

    return mpp[{l, r}] = val;
}
void solve()
{
    cin >> n;

    int ind = query(1, n);

    if (ind == 1 || query(1, ind) != ind)
    {
        int l = ind, r = n;
        while (r - l > 1)
        {
            int mid = (l + r) / 2;
            (query(ind, mid) == ind) ? r = mid : l = mid;
        }

        cout << "! " << r << endl;
    }
    else
    {
        int l = 1, r = ind;
        while (r - l > 1)
        {
            int mid = (l + r) / 2;
            (query(mid, ind) == ind) ? l = mid : r = mid;
        }

        cout << "! " << l << endl;
    }
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