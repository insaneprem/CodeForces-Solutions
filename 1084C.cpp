#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double

const int MOD = 1e9 + 7;

void solve() {
    string s;
    cin >> s;

    int ans = 0, temp = 0;

    for (auto ch : s) {
        if (ch == 'b') {
            temp = ans;
        } else if (ch == 'a') {
            ans += temp + 1;
            if (ans >= MOD) ans -= MOD;
        }
    }

    cout << ans;
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
