#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    vector<int> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++){
        char ch; cin>>ch;
        prefix[i]=ch-'0';
    }

    partial_sum(prefix.begin(), prefix.end(), prefix.begin());

    map<int, int> sums;
    
    for (int i = 0; i <= n; i++) sums[prefix[i] - i]++;

    int ans = 0;
    for (auto i : sums)
        ans += (i.second * (i.second - 1)) / 2;

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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}