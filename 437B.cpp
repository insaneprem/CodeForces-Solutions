#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long
#define P pair<int, int>

class Solution
{
    int lowbit(int n) { return n & -n; }

public:
    pair<bool, vector<int>> solve(int sum, int limit)
    {

        vector<P> nums;
        for (int i = 1; i <= limit; i++)
        {
            nums.push_back({lowbit(i), i});
        }

        sort(nums.rbegin(), nums.rend());

        vector<int> result;

        for (auto &[lb, val] : nums)
        {
            if (sum >= lb)
            {
                sum -= lb;
                result.push_back(val);
            }
        }

        if (sum == 0)
        {
            return {true, result};
        }
        else
        {
            return {false, {}};
        }
    }
};
void print(vector<int> &result)
{
    cout << result.size() << "\n";
    for (auto num : result)
        cout << num << " ";
}
void solve()
{
    int sum, limit;
    cin >> sum >> limit;

    Solution obj;
    auto [flag, result] = obj.solve(sum, limit);

    if (!flag)
    {
        cout << -1;
        return;
    }

    print(result);
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
    }
}
