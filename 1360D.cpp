#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, k, ans = 1;
        cin >> n >> k;

        for (long long i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                long long a = (n / i);
                if (a <= k)
                    ans = max(ans, a);
                if (i <= k)
                    ans = max(ans, i);
            }
        }
        cout << n / ans << endl;
    }
}