#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int n;
bool check(ld mid, vector<ld> &x, vector<ld> &v)
{
    vector<pair<ld, ld>> arr;
    for (int i = 0; i < n; i++)
    {
        ld l = x[i] - v[i] * mid;
        ld r = x[i] + v[i] * mid;
        arr.push_back({l, r});
    }

    ld l = -2e9, r = 2e9;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].second < l || arr[i].first > r)
            return 0;
        l = max(l, arr[i].first);
        r = min(r, arr[i].second);
    }
    return 1;
}
void solve()
{
    cin >> n;
    vector<ld> x(n), v(n);
    for (auto &i : x)
        cin >> i;
    for (auto &i : v)
        cin >> i;

    ld l = 0, r = 2e9;
    int eps = 100;

    while (eps--)
    {
        ld mid = (l + r) / 2;
        (check(mid, x, v)) ? r = mid : l = mid;
    }

    cout << fixed << setprecision(10);
    cout << r;
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}