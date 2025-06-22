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
        long long n, k, ans = 0;
        cin >> n >> k;
        vector<long long> arr(n), pre(n + 1, 0);
        for (auto &i : arr)
            cin >> i;

        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
            pre[i + 1] = pre[i] + arr[i];
        for (int i = 0; i <= k; i++)
            ans = max(ans, pre[n - i] - pre[2 * (k - i)]);

        cout << ans << endl;
    }
}
