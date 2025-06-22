#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    set<pair<int, int>> st;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        int temp = val, cnt = 0;

        while (temp % 3 == 0)
        {
            cnt++;
            temp /= 3;
        }

        st.insert({-cnt, val});
    }

    for (auto i : st)
        cout << i.second << " ";
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}