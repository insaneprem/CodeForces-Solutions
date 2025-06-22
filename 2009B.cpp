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
        int n;
        cin >> n;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= 4; j++)
            {
                char ch;
                cin >> ch;
                if (ch == '#')
                    ans.push_back(j);
            }
        }

        for (int i = ans.size() - 1; i >= 0; i--)
            cout << ans[i] << " ";
        cout << '\n';
    }
}