#include <bits/stdc++.h>
using namespace std;

vector<long long> arr;
long long n, s;

int check(long long k)
{
    vector<long long> costs(n);

    for (long long i = 0; i < n; i++)
        costs[i] = arr[i] + (i + 1) * k;

    sort(costs.begin(), costs.end());

    long long sum = 0;
    for (long long i = 0; i < k; i++)
        sum += costs[i];

    if (sum <= s)
        return sum;
    else
        return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s;
    arr.resize(n);

    for (auto &i : arr)
        cin >> i;

    long long l = -1;
    long long r = n + 1;

    while (r - l > 1)
    {
        long long mid = (l + r) / 2;
        (check(mid) >= 0) ? l = mid : r = mid;
    }

    cout << l << " " << check(l) << "\n";
    return 0;
}
