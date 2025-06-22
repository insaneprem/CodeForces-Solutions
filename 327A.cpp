#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    int t = count(begin(arr), end(arr), 1);

    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int one = 0, zero = 0;
        for (int j = i; j < n; j++)
        {
            (arr[j] == 1) ? one++ : zero++;

            ans = max(ans, t - one + zero);
        }
    }

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
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}