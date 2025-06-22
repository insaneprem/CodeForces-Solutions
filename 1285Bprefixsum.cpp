#include <bits/stdc++.h>
using namespace std;
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
        long long n;
        cin >> n;
        vector<long long> arr(n), prefixsum(n + 1, 0);

        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            prefixsum[i + 1] = prefixsum[i] + arr[i];
        }
        long long maxi1 = INT_MIN, maxi2 = INT_MIN, mini1 = INT_MAX, mini2 = INT_MAX;

        for (long long i = 0; i < n; i++)
            maxi1 = max(maxi1, prefixsum[i]), mini1 = min(mini1, prefixsum[i]);
        for (long long i = 1; i <= n; i++)
            maxi2 = max(maxi2, prefixsum[i]), mini2 = min(mini2, prefixsum[i]);

        if (max(maxi1 - mini1, maxi2 - mini2) < prefixsum[n])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}