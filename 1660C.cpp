#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string str;
    cin >> str;

    int n = str.size();
    vector<bool> hasOccur(26, 0);

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (hasOccur[str[i] - 'a'])
        {
            cnt += 2;
            hasOccur.assign(26, 0);
        }
        else
            hasOccur[str[i] - 'a'] = true;
    }

    cout << n - cnt << "\n";
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}