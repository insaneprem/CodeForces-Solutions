#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, t;
    cin >> n >> t;

    vector<int> arr(n);
    int a = n, b = 0, c = -t;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        c += (arr[i] * arr[i]), b += arr[i];
    }
    b *= 2;

    ld val1 = static_cast<ld>(b) * b;
    ld val2 = static_cast<ld>(4) * a * c;
    ld discriminant = val1 - val2;

    ld ans = (-b + sqrt(discriminant)) / (4 * a);
    cout << (int)ans << "\n";
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