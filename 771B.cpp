#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<string> vs(n - k + 1);
    for (int i = 0; i < n - k + 1; i++)
        cin >> vs[i];

    vector<string> names;
    string s = "A";
    for (char ch = 'a'; ch <= 'z'; ch++)
        names.push_back(s + ch);
    for (char ch = 'a'; ch <= 'z'; ch++)
        names.push_back(s + ch + ch);

    int ind = 0;
    vector<string> ans;

    for (int i = 1; i < k; i++)
        ans.push_back(names[ind++]);

    for (int i = 0; i < n - k + 1; i++)
    {
        if (vs[i] == "YES")
        {
            ans.push_back(names[ind++]);
        }
        else
            ans.push_back(ans[i]);
    }

    for (auto i : ans)
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

    solve();
}