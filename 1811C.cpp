#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n - 1);
    for (auto &i : arr)
        cin >> i;

    vector<int> ans(1, arr[0]);

    for (auto i : arr)
    {
        if (ans.back() > i)
            ans.back() = i;
        ans.push_back(i);
    }

    for (auto &i : ans)
        cout << i << " ";
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