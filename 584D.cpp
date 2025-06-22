#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}
void solve()
{
    int n;
    cin >> n;

    if (isprime(n))
        cout << "1\n"
             << n;
    else
    {
        cout << "3\n"
             << "3 ";
        n -= 3;

        for (int i = 3; i <= n; i++)
        {
            if (isprime(i) && isprime(n - i))
            {
                cout << i << " " << (n - i);
                return;
            }
        }
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

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}