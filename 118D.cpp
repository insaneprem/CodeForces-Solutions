#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int MOD = 1e8;

void solve(){
    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;

    
    int dp[n1+1][n2+1][k1+1][k2+1] = {};

    dp[0][0][0][0] = 1;

    for (int i = 0; i <= n1; i++) {
        for (int j = 0; j <= n2; j++) {
            for (int k = 0; k <= k1; k++) {
                for (int l = 0; l <= k2; l++) {
                    if (i == 0 && j == 0) continue;
                    
                    if (i > 0 && k < k1) {
                        dp[i][j][k+1][0] = (dp[i][j][k+1][0] + dp[i-1][j][k][l]) % MOD;
                    }
                    
                    if (j > 0 && l < k2) {
                        dp[i][j][0][l+1] = (dp[i][j][0][l+1] + dp[i][j-1][k][l]) % MOD;
                    }
                }
            }
        }
    }

    int result = 0;
    for (int k = 0; k <= k1; k++) {
        for (int l = 0; l <= k2; l++) {
            result = (result + dp[n1][n2][k][l]) % MOD;
        }
    }

    cout << result << endl;
}

signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    // cin>>t;
    t=1;
    while(t--) solve();
}
