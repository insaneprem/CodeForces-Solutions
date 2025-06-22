#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    vector<int> brr(n);

    for (auto &i : arr)
        cin >> i;
    for (auto &i : brr)
        cin >> i;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (brr[i] == 1)
        {
            ans += arr[i];
            arr[i] = 0;
        }
    }

    int i = 0;
    int j = 0;
    int sum = 0;
    int maxsum = 0;

    while (i < n && j < n)
    {
        if (j - i + 1 <= k)
        {
            sum += arr[j];
            j++;
        }
        else
        {
            sum -= arr[i];
            i++;
        }

        maxsum = max(maxsum, sum);
    }

    cout << ans + maxsum;
}