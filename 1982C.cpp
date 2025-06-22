#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "i", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> arr(n);
        for (auto &j : arr)
            cin >> j;

        int i = 0, cnt = 0, sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[j];
            if (sum < l)
                continue;

            if (sum <= r)
            {
                cnt++;
                i = j + 1;
                sum = 0;
                continue;
            }
            while (i <= j && sum > r)
            {
                sum -= arr[i];
                i++;
            }
            if (sum >= l)
            {
                cnt++;
                i = j + 1;
                sum = 0;
            }
        }
        cout << cnt << " ";
    }
}