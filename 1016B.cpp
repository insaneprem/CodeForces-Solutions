#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double

void solve() {
    int n, m, q;
    cin >> n >> m >> q;

    string s, t;
    cin >> s >> t;

    vector<int> prefix(n + 1, 0);
    vector<bool> ok(n, false);

    for (int i = 0; i <= n - m; i++) {
        bool match = true;
        for (int j = 0; j < m; j++) {
            if (s[i + j] != t[j]) {
                match = false;
                break;
            }
        }
        ok[i] = match;
        prefix[i + 1] = prefix[i] + (ok[i] ? 1 : 0);
    }

   
    for (int i = max(0LL, n - m + 1); i < n; i++) prefix[i + 1] = prefix[i];
    
    // for(auto i:prefix) cout<<i<<" ";
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;          
        r = r - m + 1;
        if (r >= l) cout << prefix[r] - prefix[l] << "\n";
        else  cout << "0\n";
    }
}

signed main(){
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
