#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, money;
        cin >> n >> money;

        vector<long long> arr(n);
        for (auto &i : arr)
            cin >> i;
        long long ans = 0;
        sort(arr.begin(), arr.end());
        long long sum = 0;
        long long start = 0;
        for (long long i = 0; i < n; i++)
        {
            sum += arr[i];
            while (sum > money || (start < n && arr[i] - arr[start] > 1))
            {
                sum -= arr[start];
                start++;
            }
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }

    return 0;
}
