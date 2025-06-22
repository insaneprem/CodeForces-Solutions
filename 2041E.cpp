#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int mean, median;
    cin >> mean >> median;
    cout << 3 << "\n";
    cout << median << " " << median << " " << (3 * mean) - (2 * median);
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