#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    int cnt = 0, mini = 2e9, t_sum = 0, val;

    for (int i = 0; i < n; i++)
    {
        cin >> val;

        if (val < 0)
            cnt++;
        mini = min(mini, abs(val));
        t_sum += abs(val);
    }

    if (cnt % 2)
        cout << t_sum - 2 * mini << "\n";
    else
        cout << t_sum << "\n";
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