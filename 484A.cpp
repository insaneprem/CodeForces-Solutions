#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double

void solve() {
    int l, r;
    cin >> l >> r;

    int i = 1;
    while ((l | i) <= r) {
        l |= i;
        i <<= 1;
    }

    cout << l;
}

signed main() {
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
}
