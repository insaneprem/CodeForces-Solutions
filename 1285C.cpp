#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long ans = LLONG_MAX;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            long long g = __gcd(i, n / i);
            if (g == 1)
            {
                ans = min(ans, max(i, n / i));
            }
        }
    }

    cout << ans << " " << n / ans;
}