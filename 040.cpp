#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n = 9;
    vector<vector<int>> grid(n, vector<int>(n));

    for (auto &i : grid)
        for (auto &j : i)
            cin >> j;

    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        set<int> st(begin(grid[i]), end(grid[i]));
        flag &= (st.size() == 9);
    }

    for (int j = 0; j < n; j++)
    {
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(grid[i][j]);
        }
        flag &= (st.size() == 9);
    }

    for (int row = 0; row < n; row += 3)
    {
        for (int col = 0; col < n; col += 3)
        {
            set<int> st;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    st.insert(grid[row + i][col + j]);
                }
            }
            flag &= (st.size() == 9);
        }
    }

    cout<<(flag ? "Valid" : "INVALID");
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
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}