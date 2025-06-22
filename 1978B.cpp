#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
int check(int k, int n, int a, int b) {
    int ind = min(k, min(n, b));

    int price = ((b + 1) * ind) - (ind * (ind + 1) / 2) + ((n - ind) * a);
    
    return price;
}

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    int l = 0, r = min(n, b)+1;

    while (r - l > 2) {
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;

        (check(m1, n, a, b) < check(m2, n, a, b)) ? l=m1 : r=m2;
    }

    cout << max(check(l,n,a,b),check(r,n,a,b)) << "\n";
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
    while(t--) solve();
}