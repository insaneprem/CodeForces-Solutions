#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n), ans;
    for (auto &i : arr)
        cin >> i;

    set<int> st;
    for (int i = 1; i <= n; i++)
        st.insert(i);

    for (auto i : arr)
    {
        bool flag = st.find(i) != st.end();

        if (flag)
        {
            ans.push_back(i);
            st.erase(i);
        }
        else
        {
            int val = *st.begin();
            st.erase(st.begin());
            if (val < i)
                ans.push_back(val);
            else
            {
                cout << -1;
                return;
            }
        }
    }

    for (auto &i : ans)
        cout << i << " ";
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