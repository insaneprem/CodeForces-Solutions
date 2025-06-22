#include <bits/stdc++.h>
using namespace std;
long long solve(vector<long long> &arr, long long num)
{
    long long i = 0;
    long long j = arr.size() - 1;

    long long ans = 0;
    while (i < j)
    {

        while (i < j && arr[i] + arr[j] > num)
            j--;

        ans += (j - i);
        i++;
    }

    return ans;
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
        long long n, l, r;
        cin >> n >> l >> r;

        vector<long long> arr(n);

        for (auto &i : arr)
            cin >> i;

        sort(arr.begin(), arr.end());

        cout << (solve(arr, r) - solve(arr, l - 1)) << endl;
    }
}