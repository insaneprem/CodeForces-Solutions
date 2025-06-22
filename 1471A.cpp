#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n, x;
    cin >> n >> x;

    int sum = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        sum += val;
        maxi += (val + x - 1) / x;  
    }

    cout << (sum + x - 1) / x << " " << maxi << "\n"; 
}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--) solve();
}