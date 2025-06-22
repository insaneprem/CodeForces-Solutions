#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> arr(200002, 0);
    int mini = 1e9;
    int maxi = -1e9;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        arr[l] += 1;
        arr[r + 1] -= 1;
        mini = min(l, mini);
        maxi = max(maxi, r);
    }

    vector<int> ans(200002, 0);
    for (int i = mini; i <= maxi; i++)
    {
        arr[i] += arr[i - 1];
    }

    for (int i = 1; i < 200002; i++)
    {
        if (arr[i] >= k)
            ans[i] = 1;
        ans[i] = ans[i] + ans[i - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << ans[r] - ans[l - 1] << endl;
    }
}