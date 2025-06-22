#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

void solve()
{
    string str;
    cin >> str;

    map<char, int> mpp;
    int ans = 1e9;
    for (int l = 0, r = 0; r < str.size(); r++)
    {
        mpp[str[r]]++;

        while (mpp.size() == 3)
        {
            ans = min(r - l + 1, ans);
            mpp[str[l]]--;
            if (mpp[str[l]] == 0)
                mpp.erase(str[l]);
            l++;
        }
    }

    if (ans == 1e9)
        cout << 0 << "\n";
    else
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