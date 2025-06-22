#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int MOD = 1e9 + 7;

class Combinatorics
{
    vector<int> fact;
    vector<int> modinv;
    int N;

public:
    Combinatorics(int n)
    {
        N = n;
        fact = vector<int>(N + 1, 1);
        modinv = vector<int>(N + 1, 1);
        precompute();
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
                base = (base * base) % MOD;
                x /= 2;
            }
            else
            {
                ans = (ans * base) % MOD;
                x--;
            }
        }
        return ans;
    }

    void precompute()
    {
        for (int i = 1; i <= N; i++)
        {
            fact[i] = (fact[i - 1] * i) % MOD;
            modinv[i] = power(fact[i], MOD - 2);
        }
    }

    int ncr(int n, int r)
    {
        if (n < 0 || r < 0 || r > n)
            return 0;

        int numo = fact[n];
        int ans = ((numo * modinv[r]) % MOD * modinv[n - r]) % MOD;
        return ans;
    }
};

class Solution
{
    bool isGood(int x, int a, int b)
    {
        while (x > 0)
        {
            int d = x % 10;
            if (d != a && d != b)
                return false;
            x /= 10;
        }
        return true;
    }

public:
    int solve(int n, int a, int b)
    {
        Combinatorics Pnc(n);
        int ans = 0;

        for (int i = 0; i <= n; i++)
        {
            int sum = a * i + b * (n - i);
            if (isGood(sum, a, b))
                ans = (ans + Pnc.ncr(n, i)) % MOD;
        }

        return ans;
    }
};

void solve()
{
    int n, a, b;
    cin >> a >> b >> n;

    Solution sol;

    cout << sol.solve(n, a, b);
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}
