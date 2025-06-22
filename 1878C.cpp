#include <bits/stdc++.h>
using namespace std;
bool solve(long long n, long long k, long long x)
{
    long long start = (k * k + 1) / 2;
    long long d = n - k;
    long long end = (n * (n + 1)) / 2 - (d * (d + 1)) / 2;

    if (x >= start && x <= end)
        return true;
    return false;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        if (solve(n, k, x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}