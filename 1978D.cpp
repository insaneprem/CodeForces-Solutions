#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, u;
    cin >> n >> u;

    vector<int> arr(n), ans(n);
    for (auto &i : arr) cin >> i;

    int max_ind = max_element(arr.begin(), arr.end()) - arr.begin();
    ans[max_ind] = (u + arr[0] >= arr[max_ind]) ? max_ind : 0;

    ans[0] = (u + arr[0] >= arr[max_ind]) ? 0 : 1;

    vector<int> prefix(max_ind + 1, 0);
    prefix[0] = (arr[0] + u);
    
    for (int i = 1; i < prefix.size(); i++) prefix[i] = prefix[i - 1] + arr[i];

    int a = 1;
    for (int i = 1; i < max_ind; i++)
    {
        int flag = (arr[i] + prefix[i - 1] >= arr[max_ind]) ? 0 : 1;
        ans[i] = flag + (a++);
    }


    for (int i = max_ind + 1; i < n; i++) ans[i] = i;
    for (auto i : ans) cout << i << " ";
    cout << '\n';
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