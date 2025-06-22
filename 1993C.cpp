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

        vector<int> arr(n);
        for (auto &i : arr)
            cin >> i;

        sort(arr.begin(), arr.end());

        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            int val = (arr[n - 1] - arr[i]) / k;
            if (val % 2 == 1)
                ans[i] = arr[i] + ((val + 1) * k);
            else
                ans[i] = arr[i] + (val * k);
        }

        int res = *max_element(ans.begin(), ans.end());
        int res2 = *min_element(ans.begin(), ans.end());
        if (res - res2 >= k)
            cout << -1;
        else
            cout << res;

        cout << " ";
    }
}