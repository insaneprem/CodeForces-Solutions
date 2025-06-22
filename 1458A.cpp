#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m;
    cin >> n >> m;

    long long first;
    long long ans = 0;
    for (long long i = 0; i < n; i++)
    {
        long long val;
        cin >> val;
        if (i == 0)
            first = val;
        else
            ans = __gcd(val - first, ans);
    }

    for (long long i = 0; i < m; i++)
    {
        long long val;
        cin >> val;
        cout << abs(__gcd(val + first, ans)) << " ";
    }
}