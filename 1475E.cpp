#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int mod = 1e9 + 7;
const int N = 2e3;
vector<int> fact(N + 1);
vector<int> modinv(N + 1);
int power(int base, int x)
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
void precomp()
{
    modinv[0] = 1;
    fact[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
        modinv[i] = power(fact[i], mod - 2);
    }
}
int ncr(int n, int r)
{
    if (n < 0 || r < 0 || r > n)
        return 0;

    int numo = fact[n];
    int ans = ((numo * modinv[r]) % mod * modinv[n - r]) % mod;
    return ans;
}
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    vector<int> cnt(n + 1, 0);
    for (auto i : arr)
        cnt[i]++;

    for (int i = n; i >= 0; i--)
    {
        if (cnt[i] >= k)
        {
            cout << ncr(cnt[i], k) << "\n";
            break;
        }
        else
            k -= cnt[i];
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

    int t;
    cin >> t;
    precomp();
    // t=1;
    while (t--)
        solve();
}