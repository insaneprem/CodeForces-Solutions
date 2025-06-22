#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    ld a, b;
    cin >> a >> b;
    if (a == b)
        cout << 1;
    else
        cout << ceil(log10(b / a) / log10(1.5));
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
    // cin>>t;
    t = 1;
    while (t--)
        solve();
}