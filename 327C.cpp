#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

const int MOD = 1000000007;

int mod_add(int a, int b, int m)
{
    return (a % m + b % m) % m;
}
int mod_sub(int a, int b, int m)
{
    return (a % m - b % m + m) % m;
}
int mod_mul(int a, int b, int m)
{
    return (1LL * (a % m) * (b % m)) % m;
}
int mod_exp(int a, int b, int m)
{
    if (b == 0)
        return 1;
    int res = mod_exp(a, b / 2, m);
    res = mod_mul(res, res, m);
    if (b % 2 == 1)
        res = mod_mul(res, a, m);
    return res;
}
int binexp(int base, int x, int mod)
{
    int ans = 1;
    while (x)
    {
        if (x % 2)
        {
            ans = mod_mul(ans, base, mod);
            x--;
        }
        else
        {
            base = mod_mul(base, base, mod);
            x /= 2;
        }
    }
    return ans;
}
int mod_inv(int a, int m)
{
    return mod_exp(a, m - 2, m);
}
int mod_div(int a, int b, int m)
{
    return mod_mul(a, mod_inv(b, m), m);
}

void solve()
{
    string a;
    long long k;
    cin >> a >> k;
    int n = a.size();

    vector<int> pow2(n);
    pow2[0] = 1;
    for (int i = 1; i < n; i++) pow2[i] = mod_mul(pow2[i - 1], 2, MOD);
    

    int pow2_n = mod_exp(2, n, MOD);
    int geom_sum = mod_div(mod_sub(mod_exp(pow2_n, k, MOD), 1, MOD), mod_sub(pow2_n, 1, MOD), MOD);

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0' || a[i] == '5')
        {
            int leftpow = pow2[i];
            int total = mod_mul(leftpow, geom_sum, MOD);
            result = mod_add(result, total, MOD);
        }
    }

    cout << result;
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