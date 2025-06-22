#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    int mini = *min_element(begin(arr), end(arr));

    int cnt = 0;

    for (auto i : arr)
    {
        if (mini == i)
            cnt++;

        if ((mini & i) != mini)
        {
            cout << 0;
            return;
        }
    }

    int fact = 1;
    for (int i = 2; i <= n - 2; i++)
        fact = (fact * i) % mod;
    int ans = (cnt * (cnt - 1)) % mod;
    ans = (ans * fact) % mod;
    cout << ans;
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}