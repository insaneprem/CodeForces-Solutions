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

        long long maxi = *max_element(arr.begin(), arr.end());
        long long mini = *min_element(arr.begin(), arr.end());

        long long max_diff = LLONG_MIN;

        for (long long i = 0; i < n; i++)
            max_diff = max(max_diff, arr[i] - arr[(i + 1) % n]);

        max_diff = max(max_diff, max(maxi - arr[0], arr[n - 1] - mini));

        cout << max_diff << endl;
    }

    return 0;
}
