#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
vector<int> lucky;
const int limit = 1e10;
void dfs(string str)
{
    int num = stoll(str);
    if (num > limit)
        return;

    lucky.push_back(stoll(str));

    dfs(str + '4');
    dfs(str + '7');
}
void init()
{
    dfs("4");
    dfs("7");

    sort(begin(lucky), end(lucky));
}
void solve() {
    int l, r;
    cin >> l >> r;

    init();

    int ans = 0;
    int cur = l;

    for (int i = 0; cur <= r; i++) {
        int nextLucky = lucky[i];

        if (nextLucky < cur) continue; 

        int end = min(r, nextLucky);
        ans += (end - cur + 1) * nextLucky;
        cur = end + 1;
    }

    cout << ans;
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