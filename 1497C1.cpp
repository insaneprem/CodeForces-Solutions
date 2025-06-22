#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k - 3; i++)
        cout << 1 << " ";

    n = n - (k - 3);
    k = 3;

    if (n % 2)
        cout << 1 << " " << n / 2 << " " << n / 2;
    else
    {
        if (n % 4 == 0)
            cout << n / 2 << " " << n / 4 << " " << n / 4;
        else
            cout << 2 << " " << (n - 2) / 2 << " " << (n - 2) / 2;
    }
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