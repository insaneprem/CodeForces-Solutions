#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int modExp(int base, int exp, int mod)
{
    int result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (1LL * result * base) % mod;
        }
        base = (1LL * base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int ans = 0;
        int cnt = 0;
        while (k)
        {
            if (k & 1)
            {
                ans = (ans + modExp(n, cnt, MOD)) % MOD;
            }
            k >>= 1;
            cnt++;
        }
        cout << ans << endl;
    }
}
