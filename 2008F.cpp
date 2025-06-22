#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int N = 1e6;
vector<int> fact(N + 1);
vector<int> modinv(N + 1);
const int mod = 1000000007;
int mod_mul(int a, int b, int mod) {
    return ((a % mod) * (b % mod)) % mod;
}

int mod_exp(int a, int b) {
    if (b == 0) return 1;
    int res = mod_exp(a, b / 2);
    res = mod_mul(res, res, mod);

    if (b % 2 == 1) res = mod_mul(res, a, mod);

    return res;
}
void precomp() {
    modinv[0] = 1;
    fact[0] = 1;
    for (int i = 1; i <= N; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
        modinv[i] = mod_exp(fact[i], mod - 2);
    }
}

int ncr(int n, int r) {
    if (n < 0 || r < 0 || r > n) return 0;

    int numo = fact[n];
    int ans = ((numo * modinv[r]) % mod * modinv[n - r]) % mod;
    return ans;
}

int mod_inv(int a) {
    return mod_exp(a, mod - 2);
}

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int val = ncr(n, 2) % mod;
    int sum = accumulate(arr.begin(), arr.end(), 0LL) % mod;

    int s_sq = 0;
    for (int i = 0; i < n; i++) {
        s_sq = (s_sq + mod_mul(arr[i], arr[i], mod)) % mod;
    }

    int res = mod_mul(sum, sum, mod) - s_sq;
    if (res < 0) res += mod;  

    res = mod_mul(res, modinv[2], mod);  
    res = mod_mul(res, mod_inv(val), mod);  
    
    cout << res << "\n";
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
    // t=1;

    precomp();
    while(t--) solve();
}
