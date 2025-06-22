#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    string str;
    cin >> str;

    vector<int> ans(n + 1, -1), visited(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        int cnt = 0, j = i;
        vector<int> temp;
        while (visited[j] == 0)
        {
            visited[j] = 1;
            if (str[j - 1] == '0')
                cnt++;
            temp.push_back(j);
            j = arr[j];
        }

        for (auto k : temp)
            ans[k] = cnt;
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}