#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int N = 1e6;
vector<int> fact(N + 1);
vector<int> modinv(N + 1);
int power(int base, int x, int mod)
{
    if (x < 0)
        return 0;

    int ans = 1;
    while (x)
    {
        if (x % 2 == 0)
        {
            base = (base * base) % mod;
            x = x / 2;
        }
        else
        {
            ans = (ans * base) % mod;
            x--;
        }
    }
    return ans;
}
void precomp(int mod)
{
    modinv[0] = 1;
    fact[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
        modinv[i] = power(fact[i], mod - 2, mod);
    }
}
int ncr(int n, int r, int mod)
{
    if (n < 0 || r < 0 || r > n)
        return 0;

    int numo = fact[n];
    int ans = ((numo * modinv[r]) % mod * modinv[n - r]) % mod;
    return ans;
}
void solve()
{
    int n, mod;
    cin >> n >> mod;

    precomp(mod);

    int ans = 0;
    for (int len = 1; len <= n; len++)
    {
        ans = (ans + (((n - len + 1) * fact[len]) % mod * fact[n - len + 1]) % mod) % mod;
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

    int t;
    // cin>>t;
    t = 1;
    while (t--)
        solve();
}