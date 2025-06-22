#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
    vector<int> prime(n + 1, 1);

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
            for (int j = i * i; j <= n; j += i) prime[j] = 0;
    }

    int ans = 0;
    for (int i = 2; i <= n; i++) 
      if (prime[i]) ans += n / i;

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