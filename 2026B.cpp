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

    int l = 0, r = 1e18;
    while (r - l > 1)
    {
        int mid = (r + l) / 2;

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (i+1<n && arr[i + 1] - arr[i] <= mid)
            {
                cnt++;
                i++;
            }
        }

        (cnt>=n/2) ? r=mid : l=mid;
    }

    cout<<r;
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