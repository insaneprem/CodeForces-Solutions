#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    vector<int> prices(n);
    for (auto &i : prices)
        cin >> i;

    sort(begin(prices), end(prices));

    int q;
    cin >> q;

    int coins;
    while (q--)
    {
        cin >> coins;

        int idx = upper_bound(begin(prices), end(prices), coins) - begin(prices);
        cout << idx << "\n";
    }
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
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}