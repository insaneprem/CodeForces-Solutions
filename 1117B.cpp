#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, k;
    cin >> n >> m >> k;

    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    if (m <= k)
        cout << arr[n - 1] * m;
    else
    {
        long long ans = (arr[n - 1] * k) + arr[n - 2];
        long long val = (m / (k + 1)) * ans + (m % (k + 1)) * arr[n - 1];
        cout << val;
    }
}