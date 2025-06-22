#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int mod = 998244353;
const int N = 1e6;
vector<int> fact(N + 1);
vector<int> modinv(N + 1);
int mod_mul(int a, int b)
{
    return (a % mod * b % mod) % mod;
}
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
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    sort(arr.begin(), arr.end());

    if (arr[n - 1] - arr[n - 2] > 1)
        cout << 0;
    else if (arr[n - 1] == arr[n - 2])
        cout << fact[n];
    else
    {
        int freq = 0;
        for (auto i : arr)
            if (i == arr[n - 1] - 1)
                freq++;

        int x = power(freq + 1, mod - 2);
        int val = (fact[n] - mod_mul(fact[n], x) + mod) % mod;
        cout << val;
    }

    cout << '\n';
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
    precomp();
    while (t--)
        solve();
}