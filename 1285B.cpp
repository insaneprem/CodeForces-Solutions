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
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (auto &i : arr)
            cin >> i;

        long long tsum = accumulate(arr.begin(), arr.end(), 0LL);

        long long maxsum = LLONG_MIN, current_sum = 0;
        for (long long i = 0; i < n - 1; i++)
        {
            current_sum += arr[i];
            if (current_sum > maxsum)
                maxsum = current_sum;
            if (current_sum < 0)
                current_sum = 0;
        }

        current_sum = 0;

        for (long long i = 1; i < n; i++)
        {
            current_sum += arr[i];
            if (current_sum > maxsum)
                maxsum = current_sum;
            if (current_sum < 0)
                current_sum = 0;
        }

        cout << ((maxsum >= tsum) ? "NO" : "YES");
        cout << endl;
    }

    return 0;
}
