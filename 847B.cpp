#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        int l = -1, r = ans.size();
        while (r - l > 1)
        {
            int mid = (l + r) / 2;
            (ans[mid].back() < arr[i]) ? r = mid : l = mid;
        }

        if (r == ans.size())
            ans.push_back({arr[i]});
        else
            ans[r].push_back(arr[i]);
    }

    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}