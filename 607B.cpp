#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int len = 1; len <= n; len++) {
        for (int l = 0; l + len - 1 < n; l++) {
            int r = l + len - 1;

            if (len == 1) {
                dp[l][r] = 1;
            } 
            else {
                dp[l][r] = 1 + dp[l + 1][r];

                if (arr[l] == arr[l + 1]) {
                    if (l + 2 <= r)
                        dp[l][r] = min(dp[l][r], 1 + dp[l + 2][r]);
                    else
                        dp[l][r] = 1;
                }

                for (int match = l + 2; match <= r; match++) {
                    if (arr[l] == arr[match]) {
                        int left = (match - 1 >= l + 1) ? dp[l + 1][match - 1] : 0;
                        int right = (match + 1 <= r) ? dp[match + 1][r] : 0;
                        dp[l][r] = min(dp[l][r], left + right);
                    }
                }
            }
        }
    }

    cout << dp[0][n - 1];
}

signed main() {
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
}
