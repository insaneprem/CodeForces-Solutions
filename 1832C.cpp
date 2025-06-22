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

    n = unique(arr.begin(), arr.end()) - arr.begin();
    // for(auto i:arr) cout<<i<<" ";
    int ans = n;

    for (int i = 0; i < n - 2; i++)
    {
        ans -= (arr[i] > arr[i + 1] && arr[i + 1] > arr[i + 2]);
        ans -= (arr[i] < arr[i + 1] && arr[i + 1] < arr[i + 2]);
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}