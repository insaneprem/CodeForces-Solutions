#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int diff = b - a;

        long long l = 0, r = INT_MAX;

        while (r - l > 1)
        {
            long long mid = (l + r) / 2;
            long long sum_mid = (mid * (mid + 1)) / 2;

            (sum_mid <= diff) ? l = mid : r = mid;
        }

        cout << r << endl;
    }

    return 0;
}
