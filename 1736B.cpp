#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n + 2, 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    vector<int> brr(n + 2, 1);
    for (int i = 1; i <= n + 1; i++) brr[i] = lcm(arr[i], arr[i - 1]);

    for (int i = 1; i <= n; i++)
    {

        if (__gcd(brr[i], brr[i + 1]) != arr[i])
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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