#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m;
    cin >> n >> m;

    vector<long long> arr(n);

    for (auto &i : arr)
        cin >> i;

    for (long long i = 1; i < n; i++)
        arr[i] += arr[i - 1];

    while (m--)
    {
        long long num;
        cin >> num;

        if (num <= arr[0])
            cout << 1 << " " << num;
        else
        {
            long long ind = lower_bound(arr.begin(), arr.end(), num) - arr.begin();
            cout << ind + 1 << " " << num - arr[ind - 1];
        }
        cout << endl;
    }
}