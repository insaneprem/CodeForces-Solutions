#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n;
    cin>>n;

    int p=1;
    while(n%p == 0) p*=3;

    cout<<(n+p-1)/p;
}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}