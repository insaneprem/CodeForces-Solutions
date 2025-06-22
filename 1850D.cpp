#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());
        arr[0] = arr[1];

        int maxlen = 1, cnt = 0;

        for (int i = 1; i <= n; i++)
        {
            if (arr[i] - arr[i - 1] <= k)
                cnt++;
            else
                cnt = 1;

            maxlen = max(maxlen, cnt);
        }

        cout << n - maxlen << " ";
    }
}