#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    vector<int> suffix;
    int sum = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        sum += arr[i];
        if (i > 0)
            suffix.push_back(sum);
    }

    sort(begin(suffix), end(suffix), greater<int>());

    for (int i = 0; i < k - 1; i++)
        sum += suffix[i];

    cout << sum;
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