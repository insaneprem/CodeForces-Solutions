#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double

int xr(int x) {
    if (x % 4 == 0) return x;
    if (x % 4 == 1) return 1;
    if (x % 4 == 2) return x + 1;
    return 0;
}

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int result = 0;

    
    for (auto &i:arr) {
        cin >> i;
        result ^= i;
    }

   
    for (int i = 1; i <= n; i++) {
        int count = n / i;
        if (count % 2 == 1) result ^= xr(i - 1);
        
        result ^= xr(n % i);
    }

    cout << result;
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
