#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double

int cntbeautiful(int x) {
    if (x < 10) return x;

    int result = x / 10 + 9;
    int firstdigit = x;

    while (firstdigit > 9) firstdigit /= 10;
    
    if (firstdigit > x % 10) result--;
    
    return result;
}

void solve(){
    int l, r;
    cin >> l >> r;
    cout << cntbeautiful(r) - cntbeautiful(l - 1);
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
    while(t--) {
        solve();
        cout << "\n";
    }
}
