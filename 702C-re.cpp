#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool isValid(vector<int> &cities, vector<int> &towers, int k)
{

    for (auto city : cities)
    {
        auto it = upper_bound(begin(towers), end(towers), city + k);

        if (it == towers.begin())
            return false;
        it--;
        if (abs(city - (*it)) > k)
            return false;
    }

    return true;
}
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> cities(n), towers(m);
    for (auto &i : cities)
        cin >> i;
    for (auto &i : towers)
        cin >> i;

    int l = -1e18, r = 1e18;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (isValid(cities, towers, mid))
            r = mid - 1;
        else
            l = mid + 1;
    }

    cout << l;
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}