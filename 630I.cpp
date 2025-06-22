#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double

void solve(){
    int n;
    cin >> n;

    int power1 = pow(4, n - 3);
    int power2 = pow(4, n - 4);
    
    int ans = 2 * 3 * 4 * power1 + (n - 3) * 4 * 9 * power2;

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
