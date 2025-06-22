#include <bits/stdc++.h>
using namespace std;
bool check(vector<long long> &arr, vector<long long> &brr, long long x)
{
    long long sum = 0;

    for (long long i = 0; i < arr.size(); i++)
    {
        if (arr[i] > x)
        {
            sum += brr[i];
        }
    }
    return sum <= x;
}

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
        vector<long long> brr(n);

        for (auto &i : arr)
            cin >> i;
        for (auto &i : brr)
            cin >> i;

        long long l = -1, r = 1e18;
        while (r - l > 1)
        {
            long long mid = (l + r) / 2;
            (!check(arr, brr, mid)) ? l = mid : r = mid;
        }

        cout << r << " ";
    }

    return 0;
}
