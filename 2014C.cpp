#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool check(vector<int> &arr, int money)
{
    int people = 0, n = arr.size();
    ld avg = ((ld)money / (ld)n) / 2.0;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] < avg)
            people++;
    return people > n / 2;
}
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int tsum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        tsum += arr[i];
    }

    if (n == 1 || n == 2)
    {
        cout << -1 << "\n";
        return;
    }

    sort(arr.begin(), arr.end());

    int l = -1, r = LLONG_MAX >> 1;

    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        (check(arr, tsum + mid)) ? r = mid : l = mid;
    }

    cout << r << "\n";
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