#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
class Solution
{
public:
    int solve(int k, int Fedor, vector<int> &arr)
    {
        int ans = 0;
        for (auto i : arr)
        {
            int val = Fedor ^ i;
            int setbits = __builtin_popcount(val);
            if (setbits <= k)
                ans++;
        }

        return ans;
    }
};
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> arr(m);
    for (auto &i : arr)
        cin >> i;

    int Fedor;
    cin >> Fedor;
    Solution obj;

    cout << obj.solve(k, Fedor, arr);
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