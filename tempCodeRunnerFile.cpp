#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string num, ans = "";
    cin >> num;

    vector<char> odd, even;

    for (auto i : num)
    {
        if ((i - '0') % 2)
            odd.push_back(i);
        else
            even.push_back(i);
    }

    int i = 0, j = 0, n = even.size(), m = odd.size();

    while (i < n || j < m)
        ans += (i < n && (j >= m || even[i] < odd[j])) ? even[i++] : odd[j++];

    cout << ans << "\n";
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
    // t=1;
    while (t--)
        solve();
}