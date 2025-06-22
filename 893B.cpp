#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double

void solve(){
    int n;
    cin >> n;

    vector<int> bnumbers;

    for (int k = 1; ; k++) {
        int ones = (1LL << k) - 1;
        int beautiful = ones * (1LL << (k - 1));
        if (beautiful > 100000) break;
        bnumbers.push_back(beautiful);
    }

    int ans = 1;
    for (auto i : bnumbers) {
        if (n % i == 0) {
            ans = i;
        }
    }

    cout << ans;
}

signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    // cin>>t;
    while(t--) {
        solve();
        cout<<"\n";
    }
}
